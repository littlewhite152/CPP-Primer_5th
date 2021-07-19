#include<iostream>
using namespace std;
int main(){
    int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //版本1
    cout << "版本1：" << endl;
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 4; j ++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    //版本2
    cout << "版本2：" << endl;
    for(int (*p1)[4] = a; p1 < a + 3; ++ p1){
        for(int * p2 = *p1; p2 < *p1 + 4; ++ p2){
            cout << *p2 << ' ';
        }
        cout << endl;
    }

    //版本3
    cout << "版本3：" << endl;
    for(const int(&i)[4] : a){
        for(int j : i)
            cout << j << ' ';
        cout << endl;
    }
}