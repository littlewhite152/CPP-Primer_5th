// #include<iostream>
// using namespace std;
// int main(){
//     auto old_state = cin.rdstate();
//     cin.clear();
//     process_input(cin);
//     cin.setstate(old_state); 
// }

#include<iostream>
using namespace std;
int main(){
    cout << "hi!" << flush;//输出"hi！"然后刷新缓冲区，不附加任何额外字符
    cout << "hi!" << ends;//输出"hi!"和一个空字符，然后刷新缓冲区
}