#include<iostream>
#include<vector>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main(){
    ostream_iterator<int> o(cout);
    vector<int> v = {1, 2, 3, 4, 5, 0, 6, 0, 7, 8};
    list<int> l;
    vector<int>::iterator p = v.begin() + 2;
    cout << *p << endl;
    vector<int>::iterator q = v.begin() + 7;

    vector<int>::reverse_iterator p1(p);
    vector<int>::reverse_iterator q1(q);
    copy(q1, p1, back_inserter(l));
    copy(l.begin(), l.end(), o);
}