#include<iostream>
using namespace std;
istream &fun(istream &io){
    string s;
    while(io >> s && !io.eof()){
        if(io.bad())
            throw runtime_error("io������");
        if(io.fail()){
            cerr << "���ݴ��������ԣ�" << endl;
            io.clear();
            io.ignore(100, '\n');//��io������Ч����֮���100���س����Ե�
            continue;
        }
        cout << s << endl;
    }
    io.clear();
    return io;
}
int main(){
    fun(cin);
}