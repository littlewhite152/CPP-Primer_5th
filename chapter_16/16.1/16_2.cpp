#include<iostream>
using namespace std;
template<typename T>
bool compare(T a, T b){
    return a < b;
}
int main(){
    int a = 2, b = 3;
    cout << compare(a, b);
}