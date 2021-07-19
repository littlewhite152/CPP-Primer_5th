#include<iostream>
using namespace std;
int main(){
    double a;
    double fun(double m);
    while(cin >> a){
        cout << fun(a) << endl;
    }
}
double fun(double m){
    if(m < 0)
        m = -m;
    else if(m = -0)
        m = 0;
    return m;
}