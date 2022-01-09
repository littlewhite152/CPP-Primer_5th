#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int> &nums){
    for(int i = 0; i < nums.size(); ++ i)
        cout << nums[i] << ' ';
    cout << endl;
}

//快速排序
void quick_sort(vector<int> &nums, int l, int r){
    if(l + 1 >= r)
        return;
    int first = l, last = r - 1, key = nums[first];
    while(first < last){
        print(nums);
        while(first < last && nums[last] >= key)
            -- last;
        nums[first] = nums[last];
        while(first < last && nums[first] <= key)
            ++ first;
        nums[last] = nums[first];
    }
    nums[first] = key;
    quick_sort(nums, l, first);
    quick_sort(nums, first + 1, r);
}

//归并排序
void merge_sort(vector<int> &nums, int l, int r, vector<int> &temp){
    if(l + 1 >= r)
        return;
    int m = l + (r - l) / 2;
    merge_sort(nums, l, m, temp);
    merge_sort(nums, m, r, temp);
    int p = l, q = m, i = l;
    while(p < m || q < r){
        if(q >= r || (p < m && nums[p] <= nums[q])) //右边的数组遍历完了或者左边的数组还没有遍历完并且左边的小于右边的
            temp[i ++] = nums[p ++];
        else
            temp[i ++] = nums[q ++];
    }
    for(i = l; i < r; ++ i)
        nums[i] = temp[i];
}

//插入排序
void insertion_sort(vector<int> &nums, int n){
    for(int i = 0; i < n; ++ i){
        for(int j = i; j > 0 && nums[j] < nums[j - 1]; -- j)
            swap(nums[j], nums[j - 1]);
    }
}

//冒泡排序
void bubble_sort(vector<int> &nums, int n){
    bool flag;
    for(int i = 1; i < n; ++ i){
        for(int j = 1; j < n - i  + 1; ++ j){
            if(nums[j] < nums[j - 1]){
                swap(nums[j], nums[j - 1]);// 把大的放到后面去
                flag = true;
            }
        }
        if(!flag)
            break;
    }
}

//选择排序
void selection_sort(vector<int> &nums, int n){
    int min;
    for(int i = 0; i < n; ++ i){
        min = i;
        for(int j = i + 1; j < n; ++ j){
            if(nums[j] < nums[min])
                min = j;
        }
        swap(nums[i], nums[min]);
    }
}
int main(){
    vector<int> nums = {1,3,5,7,2,6};
    vector<int> temp(nums.size());
    // sort(nums.begin(), nums.end());
    quick_sort(nums, 0, nums.size());
    // merge_sort(nums, 0, nums.size(), temp);
    // insertion_sort(nums, nums.size());
    // bubble_sort(nums, nums.size());
    // selection_sort(nums, nums.size());
}