#include<iostream>
using namespace std;
int main(){
    int a, b, result;
    while(cin >> a >> b){
        try{
            if(b == 0)
                throw runtime_error("0不能作为除数");
            result = a / b;
            cout << result << endl;
        } catch (runtime_error e){
            cout << e.what() << "是否重新输入？(y/n)";
            char c;
            cin >> c;
            if(!c || c == 'n')
                break;
        }
    }
}