#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 12, 21, 55, 89};
    forward_list<int> fl;
    for(auto i : ia){
        fl.push_front(i);
    }
    forward_list<int>::iterator pre = fl.before_begin();
    forward_list<int>::iterator cur = fl.begin();
    while(cur != fl.end()){
        if(*cur % 2 == 1){
            cur = fl.erase_after(pre);
        }
        else{
            pre = cur;
            ++ cur;
        }
    }
    for(auto i : fl)
        cout << i << " ";
    cout << endl;
}