#include<iostream>
using namespace std;
using int_array = int[4];

int main(){
    int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //�汾1
    cout << "�汾1��" << endl;
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 4; j ++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    //�汾2
    cout << "�汾2��" << endl;
    for(int_array *p1 = a; p1 < a + 3; ++ p1){
        for(int *p2 = *p1; p2 < *p1 + 4; ++ p2){
            cout << *p2 << ' ';
        }
        cout << endl;
    }

    //�汾3
    cout << "�汾3��" << endl;
    for(int_array &row : a){
        for(int i : row)
            cout << i << ' ';
        cout << endl;
    }
}