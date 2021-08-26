#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
#include<deque>
#include<array>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7};    
    int sum = accumulate(v1.begin(), v1.end(), 0);
    cout << sum << endl;
}