#include<iostream>
using namespace std;
int fun(int a){
    static int cnt = 0;
    int temp = a;
    ++ temp;
    ++ cnt;
    cout << "fun����ִ����" << cnt << "�Ρ�" << endl;
    cout << "ÿ��ִ��fun����ʱ�ֲ�����temp��ֵ����" << temp << endl;
    return a * 2;
}
int main(){
    int a;
    while(cin >> a){
        cout << fun(a) << endl;
    }
}