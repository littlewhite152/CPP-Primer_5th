#include<iostream>
#include"Sales_data.h"
using namespace std;
template<typename T>
bool compare(T a, T b){
    return a < b;
}
int main(){
    Sales_data a("fdj", 1, 2), b("lsi", 2, 1);
    cout << compare(a, b);
}