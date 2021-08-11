#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>
using namespace std;
struct personinfo{
    string name;
    vector<string> phones;
};

int main(){
    vector<personinfo> people;
    string line, phone;
    istringstream sin;
    ifstream fin("D:\\workspace_repository\\CPP-Primer_5th\\chapter_8\\8.3\\file\\8_13.txt");
    while(getline(fin, line)){
        personinfo info;
        sin.str(line);
        sin >> info.name;
        while(sin >> phone)
            info.phones.push_back(phone);
        sin.clear();
        people.push_back(info);
    }
    fin.close();
    sin.clear();

    //ɸѡ��Ч��Ϣ
    ofstream fout("D:\\workspace_repository\\CPP-Primer_5th\\chapter_8\\8.3\\file\\8_13.txt_result");
    for(const auto &info : people){
        ostringstream formatted, badnums;
        for(const auto &item : info.phones){
            if(item.length() != 11)
                badnums << " " << item;
            else
                formatted << " " << item;
        }
        if(!formatted.str().empty()){
            fout << info.name << formatted.str() << endl;
        }
        else{
            cout << "����Ŀ��" << info.name << " " << badnums.str() << " ������" << endl;
        }
        formatted.clear();
        badnums.clear();
    }
    fout.close();  
}