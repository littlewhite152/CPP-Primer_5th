#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;
int main(){
    int index = 1;
    ifstream in;
    string line, word;
    map< string, int > m;
    in.open("D:\\workspace_vscode\\CPP-Primer_5th\\chapter_11\\11.2\\11_9.txt");
    if(!in){
        cout << "打开文件失败" << endl;
        exit(1);
    }
    while(getline(in, line)){
        index ++;
        stringstream sin(line);
        while(sin >> word){
            auto temp = m.insert({word, 1});
            if(!temp.second)
                ++ temp.first->second;
        }
    }
    for(const auto &w : m){
        cout << w.first << ":" << w.second << endl;
    }
}