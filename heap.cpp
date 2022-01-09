#include<iostream>
#include<vector>
using namespace std;

//向上调整
void fix_up(vector<int> &v){
    int index = v.size() - 1;
    int parent = (index - 1) / 2;
    int key = v[index];
    while(parent >= 0 && v[index] > v[parent]){
        swap(v[index], v[parent]);
        index = parent;
        parent = (index - 1) / 2;
    }
}

//向下调整
void fix_down(vector<int> &v){
    if(v.empty())
        return;
    
    int pos = 0;
    int left = 2 * pos + 1;
    int right = left + 1;
    while(left < v.size()){
        int *ref;
        if(right < v.size()){
            ref = &(v[left] > v[right] ? v[left] : v[right]);
        }
        else
            ref = &v[left];
        if(v[pos] < *ref)
            swap(v[pos], *ref);
        else
            break;
        
        pos = *ref;
        left = 2 * pos + 1;
        right = left + 1;
        if(pos >= v.size())
            break;
    }
}

//出堆
void pop(vector<int> &v){
    cout << "pop:" << v[0] << ';';
    v[0] = v[v.size() - 1];
    v.pop_back();
    fix_down(v);
}

//建堆
vector<int> heap_insert(vector<int> &v){
    vector<int> res;
    for(auto i : v){
        res.push_back(i);
        fix_up(res);
    }
    return res;
}

int main(){
    vector<int> vec = {3,6,1,5,3,7};
    //建堆
    vector<int> res = heap_insert(vec);
    for(auto i : res){
        cout << i << ' ';
    }
    cout << endl;
    //出堆
    while(!res.empty()){
        pop(res);
        for(auto i : res){
            cout << i << ' ';
        }
        cout << endl;
    }
}