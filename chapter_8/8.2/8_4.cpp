#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main(){
    vector<string> v;
    ifstream in("D:\\workspace_repository\\CPP-Primer_5th\\chapter_8\\8.2\\file\\8_4.txt");
    if(!in){
        cerr << "�޷��������ļ�";
        return -1;
    }
    while(in){
        string s;
        if(in.bad())
            throw runtime_error("io������");
        if(in.fail())
            cout << "���ݴ���" << endl;
        
        getline(in, s);
        v.push_back(s);
        in.ignore(1, '\n');
    }
    in.close();
    for(auto s : v){
        cout << s << endl;
    }
}