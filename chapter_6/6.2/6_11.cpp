// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     char ch;
//     int count = 0;
//     int find_char(const string &, const char &, int &);
//     while(cin >> str >> ch){
//         cout << "第一次出现在第" << find_char(str, ch, count) << "个字符" << endl;
//         cout << "总共出现了" << count << "次" << endl;
//     }

// }
// int find_char(const string &s, const char &c, int &cnt){
//     bool flag = true;
//     int index;
//     for(int i = 0; i < s.size(); i ++){
//         if(s[i] == c){
//             if(flag){
//                 index = i + 1;
//                 flag = false;
//             }
//             cnt ++;
//         }
//     }
//     return index;
// }



#include<iostream>
using namespace std;
int main(){
    void reset(int &);
    int a;
    while(cin >> a){
        reset(a);
        cout << a << endl;
    }
}
void reset(int &m){
    m = 0;
}