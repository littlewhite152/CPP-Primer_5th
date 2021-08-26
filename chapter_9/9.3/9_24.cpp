#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int val;
    while(cin >> val){
        v.push_back(val);
    }
    if(!v.empty()){
        cout << "µÚÒ»¸ö£º" << endl;
        cout << v.at(0) << endl <<v[0] << endl << v.front() << endl << *v.begin() << endl;
    }
}