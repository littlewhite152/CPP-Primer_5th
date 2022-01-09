#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
template<typename T1, typename T2>
T1 find(T1 start, const T1 end, const T2& val){
    while(start != end){
        if(*start == val)
            return start;
        start ++;
    }
    return start;
}
int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    auto t = find(v.begin(), v.end(), 6);
    cout << *t << endl;
}