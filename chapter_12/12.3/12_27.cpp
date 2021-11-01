#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<sstream>
#include<fstream>
#include<memory>
using namespace std;
class QueryResult{
    public:
        QueryResult(string s, shared_ptr< set<int> > p, shared_ptr< vector<string> > f):sought(s), lines(p), file(f){}
        
    private:
        string sought;
        shared_ptr< set<int> > lines;
        shared_ptr< vector<string> > file;
    friend ostream& print(ostream &out, const QueryResult &qr);
};

ostream& print(ostream &out, const QueryResult &qr){
    out << qr.sought << " 出现了 " << qr.lines -> size() << "次";
    for(auto num : *qr.lines)
        cout << "\t(line " << num + 1 << ") " << *( qr.file -> begin() + num ) << endl;
    return out;
}

class TextQuery{
    private:
        vector<string> s;
        map< string, shared_ptr< set<int> > > m;
        shared_ptr< vector<string> > file;
    public:
        TextQuery(ifstream &in);
        QueryResult query(const string &sought) const;
};
TextQuery::TextQuery(ifstream &in){
    if(!in){
        cout << "无法打开文件" << endl;
        exit(1);
    }
    else{
        string line;
        int index = 0;
        while(getline(in, line)){
            s.push_back(line);
            istringstream wordin(line);
            string word;
            while(wordin >> word){
                auto &lines = m[word];
                if(!lines)
                    lines.reset(new set<int>);
                lines -> insert(index);
            }
            index ++;
        }
    }
}
QueryResult TextQuery::query(const string &sought) const{
    static shared_ptr< set<int> > nodata( new set<int> );
    auto loc = m.find(sought);
    if(loc == m.end())
        return QueryResult(sought, nodata, file);
    else
        return QueryResult(sought, loc -> second, file);
}


int main(){
    string file_path = "D:\\workspace_vscode\\CPP-Primer_5th\\chapter_12\\12.3\\12_27.txt";
    ifstream in(file_path);
    TextQuery tq(in);
    while(true){
        cout << "输入要查询的单词，或者按q退出：";
        string s;
        if(!(cin >> s) || s == "q")
            break;
        print(cout, tq.query(s));
    }
}