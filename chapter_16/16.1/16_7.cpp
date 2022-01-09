#include<iostream>
using namespace std;
template<typename t, unsigned m>
constexpr unsigned size(const t (&v)[m]){
    return m;
}