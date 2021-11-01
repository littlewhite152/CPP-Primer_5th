#include<iostream>
#include<memory>
using namespace std;
int main(){
    // int *pa = new int[10];
    // for(int i = 0; i < 10; ++ i)
    //     cout << pa[i] << endl;
    // delete[] pa;
    // for(int i = 0; i < 10; ++ i)
    //     cout << pa[i] << endl;
    int *p = new int;
    cout << *p << endl;
    delete p;
    cout << *p << endl;
}