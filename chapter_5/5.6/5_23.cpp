#include<iostream>
#include<exception>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if(b == 0)
        cout << "0������Ϊ����" << endl;
    else
        cout << a / b << endl;
}