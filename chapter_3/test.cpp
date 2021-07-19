// //使用for和ispunct统计string对象中标点符号的数量
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     while(cin >> s){
//         decltype(s.size()) cnt = 0;//cnt的类型是s.size()返回的类型
//         for(auto a : s){
//             if(ispunct(a))
//                 cnt ++;
//         }
//         cout << "字符串：" << s << "中，标点符号的个数为：" << cnt << endl;
//     }
// }



// //把字符串中的小写字母改成大写字母
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     while(cin >> s){
//         for(auto &a : s){
//             a = toupper(a);
//         }
//         cout << s << endl;
//     }
// }


// //将字符串中的第一个单词改成大写形式
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     bool flag = true;
//     while (getline(cin, s)){
//         for(auto &a : s){
//             if(isalpha(a)){
//                 flag = false;
//                 a = toupper(a);
//                 continue;
//             }
//             else if(!isalpha(a) && !flag)
//                 break;
//         }
//         cout << s << endl;     
//     }    
// }
