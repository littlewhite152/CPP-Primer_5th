#include<iostream>
using namespace std;
void fun_swap(double *p1, double *p2){
    double temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main(){
    double a, b;
    while(cin >> a >> b){
        cout << "����֮ǰ��" << endl;
        cout << "a = " << a << " b = " << b << endl; 
        fun_swap(&a, &b);
        cout << "����֮��" << endl;
        cout << "a = " << a << " b = " << b << endl; 
    }
}