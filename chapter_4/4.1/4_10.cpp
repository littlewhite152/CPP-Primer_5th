#include<iostream>
using namespace std;
int main(){
    int a;
    while(cin >> a){
        if(a == 42)
            break;
        cout << a << endl;
    }
}