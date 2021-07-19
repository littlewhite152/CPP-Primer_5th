#include<iostream>
using namespace std;
int fact(int m){
    int sum = 1;
    for(int i = 1; i <= m; i ++){
        sum *= i;
    }
    return sum;
}
int main(){
    int a;
    while(cin >> a){
        cout << a << "! = " << fact(a) << endl;
    }
}