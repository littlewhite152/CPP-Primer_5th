#include<iostream>
#include<fstream>
#include<map>
#include<string>
#include<iterator>
using namespace std;
string & fun(string &s){
    for(string::iterator c = s.begin(); c != s.end(); ++ c){
        if(isalpha(*c))
            *c = tolower(*c);
        else if(ispunct(*c)){
            c = s.erase(c);
            -- c;
        }
    }
    return s;
}
int main(){
    string path = "D:\\workspace_vscode\\CPP-Primer_5th\\chapter_11\\11.1\\11_4.txt";
    string word;
    ifstream fin(path);
    map<string, int> m;
    if(!fin){
        cout << "读取文件失败" << endl;
        exit(1);
    }
    while(fin >> word){
        ++ m[fun(word)];
    }
    for(auto i : m){
        cout << i.first << " 出现了" << i.second << "次" << endl;
    }
}