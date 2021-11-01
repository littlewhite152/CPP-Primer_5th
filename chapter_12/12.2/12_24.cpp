#include<iostream>
#include<string>
#include<memory>
using namespace std;
int main(){
    cout << "ÇëÊäÈë×Ö·û´®µÄ³¤¶È£º" << endl;
    int size{0};
    cin >> size;
    char *input = new char[size + 1]();
    cin.ignore(1, '\n');
    cout << "ÊäÈë×Ö·û´®£º" << endl;
    cin.get(input, size + 1);
    cout << input << endl;
    delete[] input;
}