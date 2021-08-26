#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    istream_iterator<int> in(cin), eof;
    ostream_iterator<int> out(cout, " ");
    while(in != eof){
        v.push_back(*in++);
    }
    sort(v.begin(), v.end());
    unique_copy(v.begin(), v.end(), out);
}