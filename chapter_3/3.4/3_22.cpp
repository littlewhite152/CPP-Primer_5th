#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string> text;
    string s;
    while(getline(cin, s)){
        text.push_back(s);
    }
    for(auto it1 = text.begin(); it1 != text.end() && !it1->empty(); it1 ++){
        for(auto it2 = (*it1).begin(); it2 != (*it1).end(); it2 ++){
            *it2 = toupper(*it2);
        }
        cout << *it1;
    }
}