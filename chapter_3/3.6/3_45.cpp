#include<iostream>
using namespace std;
int main(){
    int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //�汾1
    cout << "�汾1��" << endl;
    for(auto i = 0; i < 3; i ++){
        for(auto j = 0; j < 4; j ++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    //�汾2
    cout << "�汾2��" << endl;
    for(auto *p1 = a; p1 < a + 3; ++ p1){
        for(auto * p2 = *p1; p2 < *p1 + 4; ++ p2){
            cout << *p2 << ' ';
        }
        cout << endl;
    }

    //�汾3
    cout << "�汾3��" << endl;
    for(auto &i : a){
        for(auto j : i)
            cout << j << ' ';
        cout << endl;
    }
}