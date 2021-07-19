#include<iostream>
#include"Chapter6.h"
using namespace std;
int main(){
    int a;
    while(cin >> a){
        if(a > 0)
            cout << a << "£¡=" << fact(a) << endl;
        cout << "|" << a << "| = " << fun(a) << endl; 
    }
}
int fact(int m){
    int s = 1;
    for(int i = 1; i <= m; ++ i)
        s *= i;
    return s;    
}
double fun(double m){
    if(m < 0)
        m = -m;
    return m;
}