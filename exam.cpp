// #include<iostream>
// #include<vector>
// #include<string>
// #include<list>
// #include<forward_list>
// #include<deque>
// #include<array>
// #include<algorithm>
// #include<numeric>
// #include<stack>
// using namespace std;
// class MinStack {
// public:
//     /** initialize your data structure here. */
//     stack<int> stk;
//     int min;

//     MinStack() {
//     }
    
//     void push(int val) {
//         if(stk.empty()){
//             min = val;
//             stk.push(val - min);
//             cout << "入栈：" << val - min << endl;
//             cout << "min:" << min << endl;
//         }
//         else{
//             stk.push(val - min);
//             cout << "入栈：" << val - min << endl;
//             if(val < min){
//                 cout << "更新：" << min << "-->>";
//                 min = val;
//                 cout << min << endl;
//             }
//         }
        
//     }
    
//     void pop() {
//         if(stk.empty())
//             return;
//         if(stk.top() < 0){
//             min = min - stk.top();
//         }
//         stk.pop();
//     }
    
//     int top() {
//         if(stk.top() < 0)
//             return min;
//         return stk.top() + min;
//     }
    
//     int getMin() {
//         return min;
//     }
// };

// int main(){
//     MinStack m;
//     m.push(2147483646);
//     m.push(2147483646);
//     m.push(2147483647);
//     cout << m.top() << endl;//2147483647
//     m.pop();
//     cout << m.top() << endl;//2147483646
//     cout << m.getMin() << endl;//2147483646
//     m.pop();
//     cout << m.getMin() << endl;//2147483646
//     m.pop();

//     m.push(2147483647);
//     cout << m.top() << endl;//2147483647
//     cout << m.getMin() << endl;//2147483647
//     m.push(-2147483648);
//     cout << "00000" << endl;
//     cout << m.top() << endl;//-2147483648
//     cout << m.getMin() << endl;//-2147483648
//     m.pop();
//     cout << m.getMin() << endl;//
// }

// // ["MinStack","push","push","push","top","pop","getMin","pop","getMin","pop","push","top","getMin","push","top","getMin","pop","getMin"]
// // [[],[2147483646],[2147483646],[2147483647],[],[],[],[],[],[],[2147483647],[],[],[-2147483648],[],[],[],[]]


// #include<iostream>
// #include<vector>
// #include<string>
// #include<list>
// #include<forward_list>
// #include<deque>
// #include<array>
// #include<algorithm>
// #include<numeric>
// using namespace std;
// int main(){
//     int fun(string str, int b, int e);
//     int cnt;
//     string str;
//     cin >> cnt;
//     while (cnt --){
//         int i = 0;
//         cin >> str;
//         if(fun(str,0,str.size()/2) == fun(str, str.size() / 2, str.size()) || )
//             cout << "YES" <<endl;
//         else 
//             cout << "NO" <<endl;
//     }
    
// }
// bool fun(string str){
//     string s = "";
// }




// #include<iostream>
// #include<vector>
// #include<string>
// #include<list>
// #include<forward_list>
// #include<deque>
// #include<array>
// #include<algorithm>
// #include<numeric>
// using namespace std;
// int main(){
//     int fun(int a[],int len, int b, int v);
//     int cnt;
//     cin >> cnt;
//     int a[cnt];
//     for(int i = 0;i < cnt;++ i){
//         cin >> a[i];
//     }
//     cout << cnt - fun(a,cnt,0,2) - fun(a,cnt,1,2);
// }
// int fun(int a[],int len, int b, int v){
//     int flag[100000] = {0};
//     int same = a[b];
//     int cnt = 0;
//     while(b < len){
//         flag[a[b]] ++;
//         b += v;
//     }
//     for(int i = 99999; i >= 0; -- i){
//         if(flag[i] != 0){
//             return flag[i];
//         }
//     }
// }




// #include<iostream>
// #include<vector>
// using namespace std;
// string fun(string str){
//     string s = "";
//     string sub = "ab";
//     int index = 0;
//     while(s.size() <= str.size()){
//         while(index != s.size() - 1){
//             s.insert(s.begin() + index, sub.begin(), sub.end());
//             if(s == str)
//                 return "YES";
//             ++ index;
//         }
//         if()
//     }
//     return "NO";
// }
// int main(){
//     int cnt;
//     string s;
//     cin >> cnt;
//     while(cnt --){
//         cin >> s;
//         cout << fun(s) << endl;
//     }
// }


// //细胞过血管
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<functional>
// using namespace std;
// struct cell{
//     int x;
//     int y;
//     int len;
// };
// bool samex(cell &c1, cell &c2){ 
//     return c1.len == c2.len; 
// }
// int main(){
//     vector<cell> v;
//     int n, b;
//     cin >> n >> b;
//     for(int i = 1;i <= n; ++ i){
//         cell c;
//         cin >> c.x >> c.y >> c.len;
//         auto p = find_if(v.begin(), v.end(), bind(samex, placeholders::_1, c));
//         if(p != v.end()){
//             if(abs(p->y - c.y) < (p->len + c.len)){
//                 cout << i - 1;
//                 break;
//             }
//             else if(p->len * 2 + c.len * 2 >= b){
//                 cout << i - 1;
//                 break;
//             }
//         }
//         else{
//             v.push_back(c);
//         }
//     }
// }



// // 8/22 第三题
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int cnt;
//     int w, val;
//     cin >> cnt;
//     for(auto i = 0;i < cnt;++ i){
//         cin >> w >> val;
//         long s = pow(10, w - 1);
//         int k = s;
//         for(;k < s * 10;++ k){
//             if(k % val == 0){
//                 cout << k;
//                 break;
//             }
//         }
//         if(k == s * 10)
//             cout << -1;
//     }
// }




// #include<iostream>
// #include<math.h>
// using namespace std;
// int fun(int a, int b, int &count){
//     if(abs(a-b) == 1){
//         count ++;
//         return count;
//     }
//     else if(a - b == 2){
//         count ++;
//         return count;
//     }
//     else if(a < b){
//         if(abs(a * 2 - b) < abs((a - 2) * 2 - b)){
//             count ++;
//             count += fun(a * 2, b, count);
//             a *= 2;
//         }
//         else{
//             count += 2;
//             count += fun((a - 2) * 2, b, count);
//             a = (a - 2) * 2;
//         }
//     }
//     else if(a > b){
//         count ++;
//         fun(a - 2, b, count);
//     }
//     if(a == b)
//         return count;
// }
// int main(){
//     int cnt, a, b;
//     int count = 0;
//     cin >> cnt;
//     for(int i = 0;i < cnt; ++ i){
//         cin >> a >> b;
//         cout << fun(a, b, count);
//     }
// }


//过不了
// [1,2,3,0,0,0]
// 3
// [2,5,6]
// 3
// [-1,0,0,3,3,3,0,0,0]
// 6
// [1,2,2]
// 3
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> nums1 = {0,0,3,3,3,0,0,0};
//     vector<int> nums2 = {1,2,2};
//     int m = 6;
//     int n = 3;
//     if(nums2.size() != 0){
//         for(auto p = nums1.begin(), qmin = nums2.begin(); p != nums1.end(); ++ p){
//             //如果遍历到num1数组最后一个元素
//             if(p - nums1.begin() == m + 1 || (*p == 0 && p - nums1.begin() == m + 1)){
//                 cout << p - nums1.begin() << endl;
//                 cout << *p;
//                 while(p != nums1.end()){
//                     *p = *qmin;
//                     ++ p;
//                     ++ qmin;
//                 }
//                 break; 
//             }
//             //找到第一个比qmin大的
//             if(*qmin > *p)
//                 continue;
//             auto qmax = qmin;
//             while(*qmax <= *p && qmax + 1 != nums2.end()){
//                 ++ qmax;
//             }
//             if(qmax + 1 == nums2.end()){
//                 p = nums1.insert(p, qmin, nums2.end());
//                 break;
//             }
//             p = nums1.insert(p, qmin, qmax);
//             p += (qmax - qmin);
//             //当前num1遍历完
//             if(qmax == nums2.end()){
//                 break;
//             }
//             else
//                 qmin = qmax;
//         }
//         nums1.erase(nums1.begin() + m + n, nums1.end());
//     }
//     for(auto i : nums1){
//         cout << i << " ";
//     }
// }




// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> nums1 = {1,2,3,0,0,0};
//     vector<int> nums2 = {2,5,6};
//     int m = 3;
//     int n = 3;
//     vector<int> v(m + n);
//     auto p = nums1.begin(), q = nums2.begin();
//     while(*p != 0 && q != nums2.end()){
//         if(*p <= *q){
//             v.push_back(*p);
//             ++ p;
//         }
//         else{
//             v.push_back(*q);
//             ++ q;
//         }
//     }
//     if(*p == 0){
//         while(p != nums1.end()){
//             *p = *q;
//             ++ q;
//         }
//     }
//     nums1 = v;
//     for(auto i : nums1){
//         cout << i << ' ';
//     }
// }


// // 期末考试
// #include<vector>
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> v;
//     int n, p, q, val,count = 0;
//     cin >> n >> p >> q;
//     for(int i = 0; i < n; ++ i){
//         cin >> val;
//         v.push_back(val);
//     }
//     sort(v.begin(), v.end());
//     for(int t = v.size() - 1, pval = 100; t != -1; -- t){
//         if(v[t] != v[t - 1])
//             pval --;
//         if( (v[t] * q + pval * p) / 100 >= 60 )
//             count ++;
//     }
//     cout << count;
// }

// // 长城烽火台
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<math.h>
// using namespace std;
// int minindex(vector<int> &v){
//     auto min = v.begin();
//     for(auto p = v.begin() + 1; p != v.end(); ++ p){
//         if(*p < *min)
//             min = p;
//     }
//     return min - v.begin();
// }
// int main(){
//     int n, m, x, k, b, max = 0;
//     int minj, maxj;
//     vector<int> v;
//     cin >> n >> m >> x >> k;
//     for(int i = 0; i < n; ++ i){
//         cin >> b;
//         v.push_back(b);
//     }
//     for(int i = 0; i < m; ++ i){
//         int index = minindex(v);
//         cout << "index :" << index << endl;
//         minj = index - x;
//         minj = minj < 0 ? 0 : minj;
//         maxj = index + x;
//         maxj = maxj > ( v.size() - 1 ) ? ( v.size() - 1 ) : maxj;
//         while(minj <= maxj){
//             v[minj ++] += k;
//         }
//         for(auto k : v){
//             cout << k << ' ';
//         }
//         cout << endl;
//     }
//     cout << v[minindex(v)] << endl;
// }




// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int m = 0;
//     int n = 0;
//     int r = 1, c = 4;
//     vector<vector<int>> res;
//     vector<vector<int>> mat = { {1,2}, {3,4} };
//     if(mat.size() * mat[0].size() != r * c){
//         cout << "0";
//     }
//     else{
//         for(int i = 0; i < mat.size(); ++ i){
//             cout << "j" << endl;
//             for(int j = 0; j < mat[i].size(); ++ j){
//                 cout << "k" << endl;
//                 res[m][n ++] = mat[i][j];
//                 if(n == c){
//                     m ++;
//                     n = 0;
//                 }
//             }
//         }
//     }
//     cout << "1";
// }


// #include"stdio.h"
// #include"string.h"
// main(){
//     char ss[10] = "1,2,3,4,5";
//     gets(ss);
//     strcat(ss, "6789");
//     printf("%s\n", ss);
// }



// #include"stdio.h"
// #include"string.h"
// #include<iostream>
// using namespace std;
// main(){
//     char p[] = {'a', 'b', 'c'}, q[] = "abc";
//     cout << sizeof(p) << endl << sizeof(q);
// }

// #include"stdio.h"
// #include"string.h"
// #include<iostream>
// using namespace std;
// main(){
//     int a[] = {2,4,6,8,10},y = 0,x,*p;
//     p = &a[1];
//     for(x = 1;x<3;x++)
//         y +=p[x];
//     cout << y;
// }

// #include"stdio.h"
// #include"string.h"
// #include<iostream>
// using namespace std;
// main(){
//     int m = 1, n = 2, *p = &m,*q = &n, *r;
//     r = p;
//     p = q;
//     q = r;
//     cout << m << endl << n <<endl<< *p <<endl<< *q <<endl;
// }

#include"stdio.h"
#include"string.h"
#include<iostream>
#include<vector>
using namespace std;
// bool fun(string str){
//     int i = 0, j = 0;
//     j = x ++;
//     for(j --;i < j && str[i] == str[j];i ++,j--);
//     return i == j;
// }
main(){
    vector<int> v;
    for(int i = 0; i< 5;++ i){
        v.push_back(i);
        cout << v.capacity() << " ";
    }
    vector<int>vm(v);
    cout << vm.capacity() << endl;
}