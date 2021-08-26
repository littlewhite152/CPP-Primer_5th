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