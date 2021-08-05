#include<iostream>
#include<vector>
#include<cassert>
using namespace std;
int main(){
    int index = 0;
    double i, j;
    double (*fun1)(const double i, const double j);
    double (*fun2)(const double i, const double j);
    double (*fun3)(const double i, const double j);
    double (*fun4)(const double i, const double j);
    vector<decltype(fun1)> v = {fun1, fun2, fun3, fun4};
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