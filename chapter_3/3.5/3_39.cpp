// //比较两个string值
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1, s2;
//     cin >> s1 >> s2;
//     if(s1 != s2){
//         if(s1 > s2)
//             cout << s1 << "比" << s2 << "大" << endl;
//         else
//             cout << s1 << "比" << s2 << "小" << endl;
//     }
//     else
//         cout << s1 << "与" << s2 << "相等" << endl;
// }

// //比较两个c风格字符串的值
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char a[3], b[3];
//     for(int i = 0; i < 3; i ++)
//         cin >> a[i];
//     for(int i = 0; i < 3; i ++)
//         cin >> b[i];
    
//     for(int i = 0; i < 3; i ++)
//         cout << a[i] << ' ';
//     for(int i = 0; i < 3; i ++)
//         cout << b[i] << ' ';

//     if(strcmp(a, b) == 0)
//         cout << "两个字符串相等" << endl;
//     else if(strcmp(a, b) > 0)
//         cout << "前者字符串大" << endl;
//     else if(strcmp(a, b) < 0)
//         cout << "后者字符串大" << endl;
// }