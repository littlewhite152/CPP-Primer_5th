// // list°æ±¾
// #include<iostream>
// #include<list>
// #include<forward_list>
// using namespace std;
// int main(){
//     list<int> l = {0, 1, 2, 3, 4, 5, 6};
//     auto iter = l.begin();
//     while(iter != l.end()){
//         if(*iter % 2){
//             iter = l.insert(iter, *iter);
//             iter ++;
//             iter ++;
//         }
//         else
//             iter = l.erase(iter);
//     }
//     for(auto i : l){
//         cout << i << ' ';
//     }
// }


#include<iostream>
#include<list>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int> l = {0, 1, 2, 3, 4, 5, 6};
    auto pre = l.before_begin();
    auto cur = l.begin();
    while(cur != l.end()){
        if(*cur % 2){
            // cout << *cur << endl;
            cur = l.insert_after(cur, *cur);
            pre ++;
            cur ++;
            pre ++;
        }
        else{
            cur ++;
            l.erase_after(pre);
        }
    }
    for(auto i : l){
        cout << i << ' ';
    }
}