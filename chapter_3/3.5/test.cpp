// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1, j = 2, k = 3;
//     int *p1 = &i;
//     int *p2 = &j;
//     int *p3 = &k;
//     int *b[3] = {p1, p2, p3};//b是一个指针数组，数组内的每一个元素都是指针
//     for(int i = 0;i < 3; i ++){
//         cout << b[i] << ' ';
//     }
//     cout << endl;
//     int *(&a)[3] = b;//a引用的是b这个指针数组
//     for(auto i : a){
//         cout << i << ' ';
//     }
// }

// //使用{}进行初始化和不进行初始化的区别
// #include<iostream>
// using namespace std;
// int main(){
//     int s[3] = {};
//     int a[3];
//     for(auto i : s)
//         cout << i << ' ';
//     cout << endl;
//     for(auto i : a)
//         cout << i << ' ';
// }


// //定义一个值给前面几个元素初始化的数组
// #include<iostream>
// using namespace std;
// int main(){
//     int a[4] = {1,2};
//     for(auto i : a)
//         cout << i << ' ';
// }