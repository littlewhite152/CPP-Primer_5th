#include<iostream>
#include<string>
#include<memory>
using namespace std;
int main(){
    cout << "�������ַ����ĳ��ȣ�" << endl;
    int size{0};
    cin >> size;
    char *input = new char[size + 1]();
    cin.ignore(1, '\n');
    cout << "�����ַ�����" << endl;
    cin.get(input, size + 1);
    cout << input << endl;
    delete[] input;
}