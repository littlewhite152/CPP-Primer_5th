#include<iostream>
#include<vector>
using namespace std;
bool fun(vector<int>::const_iterator &i, vector<int>::const_iterator &j, int val){
    while(i != j){
        if(*i == val)
            return true;
    }
    return false;
}