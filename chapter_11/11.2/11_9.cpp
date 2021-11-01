#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;
string fun(string &word){
    for(int i = 0; i < word.size(); ++ i){
        if(isalpha(word[i]) && isupper(word[i]))
            word[i] = tolower(word[i]);
        else if(word[i] == ',' || word[i] == '.')
            word.erase(i, 1);
    }
    return word;
}
int main(){
    int index = 1;
    ifstream in;
    string line, word;
    vector<string> word_list;
    map< string, vector<int> > m;
    in.open("D:\\workspace_vscode\\CPP-Primer_5th\\chapter_11\\11.2\\11_9.txt");
    if(!in){
        cout << "打开文件失败" << endl;
        exit(1);
    }
    while(getline(in, line)){
        index ++;
        stringstream sin(line);
        while(sin >> word){
            word = fun(word);
            m[word].push_back(index);
        }
    }
    for(const auto &w : m){
        cout << w.first << "所在行：";
        for(const auto &l : w.second){
            cout << l << ' ';
        }
        cout << endl;
    }
}