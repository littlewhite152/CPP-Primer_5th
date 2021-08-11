#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;
struct Personinfo{
    string name;
    vector<string> phones;
};

int main(){
    vector<Personinfo> people;
    string line, word;
    istringstream sin;
    while(getline(cin, line)){
        Personinfo info;
        sin.str(line);
        sin >> info.name;
        while(sin >> word)
            info.phones.push_back(word);
        people.push_back(info);
        sin.clear();//重复使用字符串流时，每次都要调用clear()
    }
}