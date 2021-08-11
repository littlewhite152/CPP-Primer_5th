#include<iostream>
using namespace std;
istream &fun(istream &io){
    string s;
    while(io >> s && !io.eof()){
        if(io.bad())
            throw runtime_error("io流错误");
        if(io.fail()){
            cerr << "数据错误，请重试：" << endl;
            io.clear();
            io.ignore(100, '\n');//将io流中有效输入之后的100个回车忽略掉
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