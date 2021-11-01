#include<iostream>
#include<memory>
#include<vector>
using namespace std;
void print(vector<int> *v){
    for(auto i = v ->begin(); i != v -> end(); ++ i){
        cout << *i << endl;
    }
    delete v;
}
void fun(istream &in){
    vector<int> *v = new vector<int>;
    int i;
    while(in >> i){
        v -> push_back(i);
    }
    print(v);
}
int main(){
    fun(cin);
}