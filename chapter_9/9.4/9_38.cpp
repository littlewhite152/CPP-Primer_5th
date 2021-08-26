#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    
    cout << v.size() << endl << v.capacity() << endl;

    for(int i = 0;i < 10;++ i){
        v.push_back(i);
    }
    cout << v.size() << endl << v.capacity() << endl;

    v.resize(16);
    cout << v.size() << endl << v.capacity() << endl;

    v.resize(17);
    cout << v.size() << endl << v.capacity() << endl;

    v.shrink_to_fit();
    cout << v.size() << endl << v.capacity() << endl;
}