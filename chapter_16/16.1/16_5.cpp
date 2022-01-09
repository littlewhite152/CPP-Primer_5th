#include<iostream>
using namespace std;
template<typename t, unsigned m>
void print(t (&p)[m]){
    for(t i : p){
        cout << i << endl;
    }
}
int main(){
    int v[4] = {1, 2, 3, 4};
    char c[4] = {'a', 'v', 'd', 'y'};
    print(v);
    cout << endl;
    print(c);
}