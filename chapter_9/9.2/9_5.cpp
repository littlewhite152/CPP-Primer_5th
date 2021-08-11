#include<iostream>
#include<vector>
using namespace std;
vector<int>::const_iterator &fun(vector<int>::const_iterator &i, vector<int>::const_iterator &j, int val){
    while(i != j){
        if(*i == val)
            return i;
    }
    return i;
}