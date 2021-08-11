#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
ostringstream &fun(ostringstream &io){
    cout << io.str() << endl;
    io.clear();
    return io;
}
int main(){
    vector<string> v;
    string s;
    while(getline(cin, s)){
        v.push_back(s);
    }
    for(auto i = v.begin(); i != v.end(); ++ i){
        ostringstream out(*i);
        fun(out);
    }
}