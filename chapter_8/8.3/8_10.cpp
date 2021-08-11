#include<iostream>
#include<sstream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string line, word;
    vector<string> v;
    istringstream sin;
    ifstream fin("D:\\workspace_repository\\CPP-Primer_5th\\chapter_8\\8.3\\file\\8_10.txt");
    while(getline(fin, line)){
        v.push_back(line);
    }
    for(auto i = v.begin(); i != v.end(); ++ i){
        sin.str(*i);
        while(sin >> word){
            cout << word << endl;
        }
        sin.clear();
    }
}