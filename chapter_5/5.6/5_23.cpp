#include<iostream>
#include<exception>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if(b == 0)
        cout << "0不能作为除数" << endl;
    else
        cout << a / b << endl;
}