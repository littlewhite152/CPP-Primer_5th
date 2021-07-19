// //比较两个数组是否相等
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int a[3], b[3];
//     int i;

//     cout << "请输入a数组的3个数：";
//     for(int i = 0; i < 3; i ++){
//         cin >> a[i];
//     }
//     cout << "请输入b数组的3个数：";
//     for(int i = 0; i < 3; i ++){
//         cin >> b[i];
//     }
//     for(i = 0; i < 3; i ++){//不能使用int i = 0
//         if(a[i] != b[i])
//             break;
//     }
//     if(i == 3)
//         cout << "两个数组相等";
//     else
//         cout << "两个数组不相等";
// }


//比较两个数组是否相等
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a(3), b(3);

    cout << "请输入a的3个数：";
    for(int i = 0;i < 3; i ++)
        cin >> a[i];
        
    cout << "请输入b的3个数：";
    for(int i = 0;i < 3; i ++)
        cin >> b[i];

    auto it1 = a.cbegin();
    auto it2 = b.cbegin();
    while(it1 < a.cend() && it2 < b.cend()){
        if(*it1 != *it2){            
            cout << "两个vector不相等";
            break;
        }
        it1 ++;
        it2 ++;
    }
    if(it1 == a.cend() && it2 == b.cend())
        cout << "两个vecto相等";
}