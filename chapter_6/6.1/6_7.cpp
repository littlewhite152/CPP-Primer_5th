#include<iostream>
using namespace std;
int main(){
    int fun();
    int a;
    cout << "��������Ҫ����fun�����Ĵ�����" << endl;
    cin >> a;
    for(int i = 1; i <= a; ++ i){
        cout << "��" << i << "�ε���ʱ����ֵ��" << fun() << endl;
    }
}
int fun(){
    static int a = 0;
    return a ++;
}