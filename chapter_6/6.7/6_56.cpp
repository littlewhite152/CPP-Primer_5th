#include<iostream>
#include<vector>
#include<cassert>
using namespace std;
int main(){
    double i, j;
    double fun1(const double i, const double j);
    double fun2(const double i, const double j);
    double fun3(const double i, const double j);
    double fun4(const double i, const double j);
    decltype(fun1) *f1 = &fun1;
    decltype(fun2) *f2 = &fun2;
    decltype(fun3) *f3 = &fun3;
    decltype(fun4) *f4 = &fun4;
    vector<decltype(fun1) *> v = {f1, f2, f3, f4};
    while(cin >> i >> j){
        cout << i << '+' << j << " = " << (*v[0])(i, j) << endl;
        cout << i << '-' << j << " = " << (*v[1])(i, j) << endl;
        cout << i << '*' << j << " = " << (*v[2])(i, j) << endl;
        cout << i << '/' << j << " = " << (*v[3])(i, j) << endl;
    }
}

double fun1(const double i, const double j){
    return i + j;
}
double fun2(const double i, const double j){
    return i - j;
}
double fun3(const double i, const double j){
    return i * j;
}
double fun4(const double i, const double j){
    return i / j;
    assert(j == 0);
}