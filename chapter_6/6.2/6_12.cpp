#include<iostream>
using namespace std;
int main(){
    char c1, c2;
    void fun_swap(char &, char &);
    while(cin >> c1 >> c2){
        cout << "����֮ǰ��" << endl << "c1 = " << c1 << ' ' << "c2 = " << c2 << endl;
        fun_swap(c1, c2);
        cout << "����֮��" << endl << "c1 = " << c1 << ' ' << "c2 = " << c2 << endl;
    }
}
void fun_swap(char &a, char &b){
    char temp;
    temp = a;
    a = b;
    b = temp;
}