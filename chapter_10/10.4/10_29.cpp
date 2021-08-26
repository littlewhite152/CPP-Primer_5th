#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
#include<deque>
#include<array>
#include<algorithm>
#include<numeric>
#include<iterator>
#include<fstream>
using namespace std;
int main(){
    ifstream f("D:\\workspace_vscode\\CPP-Primer_5th\\chapter_10\\10.4\\10_29.txt");
    if(!f){
        cout << "打开文件失败" << endl;
        exit(1);
    }
    vector<string> v;
    istream_iterator<string> in(f), eof;
    while(in != eof){
        v.push_back(*in ++);
    }
    for(auto s : v){
        cout << s << endl;
    }
}