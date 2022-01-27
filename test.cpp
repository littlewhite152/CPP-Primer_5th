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

// }

// #include<iostream>
// #include<forward_list>
// using namespace std;
// int main(){
//     forward_list<int> fl;
//     int val;
//     while(cin >> val){
//         fl.push_front(val);
//     }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// struct movie{
//     int starth;
//     int startm;
//     int endh;
//     int endm;
//     int len = fun(starth, startm, endh, endm);

//     int fun(int starth, int startm, int endh, int endm){
//         return (endh - starth) * 60 + endm - startm;
//     }
// }
// int main(){
//     vector<movie> v;
//     int cnt;
//     cin >> cnt;
//     for(auto i : cnt){
//         movie temp;
//         cin >> temp.starth >> ":" >> temp.startm >> "-" >> temp.endh >> temp.endm;
//     }
// }

// #include<iostream>
// #include<vector>
// #include<iterator>
// using namespace std;
// int main(){
//     vector<int> v;
//     int val;
//     istream_iterator<int> in(cin), end;
//     while(in != end){
//         // cout << "val:" << val << endl;
//         cout << "*in:" << *in << endl;
//         v.push_back(*in);
//     }
//     for(auto i : v){
//         cout << i << ' ';
//     }
// }

// #include<iostream>
// #include<vector>
// #include<iterator>
// using namespace std;
// int main(){
//     int val;
//     vector<int> v;
//     while(cin >> val){
//         v.push_back(val);
//     }
//     cout << *(-- v.end());
//     cout << *v.end();
//     cout << *(v.end().base());
// }

// #include<iostream>
// #include<vector>
// #include<list>
// #include<iterator>
// #include<algorithm>
// using namespace std;
// int main(){
//     ostream_iterator<int> o(cout);
//     vector<int> v = {1, 2, 3, 4, 5, 0, 6, 0, 7, 8};
//     vector<int> l;

//     copy(v.begin(), v.end(), back_inserter(l));
//     cout << l.size() << endl;
//     // copy(v.begin(), v.end(), l.begin());
//     // copy(l.begin(), l.end(), o);
//     for(auto val : l){
//         cout << val << endl;
//     }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int numRows = 5;
//     vector<vector<int>> v;
//     for(int i = 0 ;i < numRows; ++ i){
//         vector<int> temp(i + 1, 1);
//         if(i > 1){
//             for(int j = 1; j < temp.size() - 1; ++ j){
//                 if(i > 1){
//                     temp[j] = v[i - 1][j - 1] + v[i - 1][j];
//                 }
//             }
//         }
//         for(auto i : v){
//             for(auto j : i)
//                 cout << j << ' ';
//             cout << endl;
//         }
//         v.push_back(temp);
//     }

// }

// #include<iostream>
// #include<map>
// #include<string>
// using namespace std;
// int main(){
//     map<string, int> m;
//     m.insert(make_pair("test", 1));
//     for(auto i : m)
//         cout << i.first << ' ' << i.second;
//     cout << endl << endl;
//     auto p = m.begin();
//     pair<string, int> q = {"kkk", 4};
//     pair<string, int> *q1 = &q;
//     // q1->first = "uuuu";
//     m.insert(*q1);
//     q1->second = 55;
//     for(auto i : m)
//         cout << i.first << ' ' << i.second << endl;
// }

// #include<iostream>
// #include<map>
// #include<vector>
// #include<string>
// #include<fstream>
// #include<sstream>
// using namespace std;
// int main(){
//     int index = 1;
//     ifstream in;
//     string line, word;
//     map< string, int > m;
//     in.open("D:\\workspace_vscode\\CPP-Primer_5th\\chapter_11\\11.2\\11_9.txt");
//     if(!in){
//         cout << "打开文件失败" << endl;
//         exit(1);
//     }
//     while(getline(in, line)){
//         index ++;
//         stringstream sin(line);
//         while(sin >> word){
//             auto temp = m.insert({word, 1});
//             if(!temp.second)
//                 ++ temp.first->second;
//         }
//     }
//     for(const auto &w : m){
//         cout << w.first << ":" << w.second << endl;
//     }
//     cout << "查找元素：" << endl;
//     string s = "was";
//     auto item = m.find(s);
//     auto count = m.count(s);
//     while(count){
//         cout <<
//     }
// }

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s = "abcabcbb";
//     if(s.size() == 0)
//         exit(1);
//     auto max = 0;
//     auto len = 1;
//     auto start = s.begin();
//     cout << *start;
//     for(auto end = s.begin() + 1; end != s.end(); ++ end){
//         while( find_if(start, end - 1, [end](string::iterator temp){return *temp == *end;}) == end){
//             len ++;
//             continue;
//         }
//         start = end;
//         if(len > max)
//             max = len;
//         else
//             len = 0;
//     }
//     cout << max;
// }

// #include<iostream>
// #include<memory>
// using namespace std;
// int main(){
//     int a = 8;
//     int *p = &a;
//     shared_ptr<int> ptr(p);
//     cout << *p << endl;
//     ptr.reset();
//     cout << *p << endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i = 0;
//     cout << (0 << i) << endl;
// }

// #include<iostream>
// #include<memory>
// using namespace std;
// int main(){
//     auto* p = new auto{'a'};
//     cout << *p << endl;

//     auto *q = new auto{'a', 'b', 'c'};
//     cout << *q << endl;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v{1, 2, 2, 2, 5};
//     vector<int> c(5);
//     auto *first = &v[0];
//     auto *last = &v[5];
//     auto *result = &c[0];
//     *result = *first;
//     while(++first != last){
//         if(*result != *first)
//             *++result = *first;
//     }
//     for(auto i : c)
//         cout << i << endl;
// }

// //华为消毒液和工位
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int i;
//     char c;
//     // vector<int> gongwei = {1,  7}, xiaoduye = {2, 4}, min;
//     vector<int> gongwei , xiaoduye , min;
//     while( (c = getchar()) != '\n'){
//         if(c != ' ')
//         gongwei.push_back(c - '0');
//     }
//     while( (c = getchar()) != '\n'){
//         if(c != ' ')
//         xiaoduye.push_back(c - '0');
//     }
//     sort(gongwei.begin(), gongwei.end());
//     sort(xiaoduye.begin(), xiaoduye.end());
//     for(int i = 0; i < xiaoduye.size(); ++ i){
//         int temp;
//         //特殊情况
//         if(xiaoduye.size() == 1){
//             temp = max(xiaoduye[0] - gongwei[0], gongwei[gongwei.size() - 1] - xiaoduye[0]);
//             min.push_back(temp);
//             break;
//         }
//         //第一个
//         if(i == 0)
//             temp = xiaoduye[i] - gongwei[i];
//         //最后一个
//         if(i == xiaoduye.size() - 1){
//             temp = max( (xiaoduye[i] - xiaoduye[i - 1]) / 2, (gongwei[gongwei.size() - 1] - xiaoduye[i]));
//         }
//         //中间
//         else
//             temp = max( (xiaoduye[i] - xiaoduye[i - 1]) / 2, (xiaoduye[i + 1] - xiaoduye[i]) / 2);
//         cout << temp << endl;
//         min.push_back(temp);
//     }
//     cout << *max_element(min.begin(), min.end());
// }

// #include<iostream>
// using namespace std;
// int main(){
//     uint32_t n = 11111111111111111111111111111101;
//     cout << n << endl;
//     // int n = 3340530109;
//     long long res = 0;
//     for(int i = 0; i < 32; ++ i){
//         int temp = n & (1 << i);
//         // cout << temp << endl;
//         temp = temp >> i;
//         cout << temp << ' ';
//         // if(temp)
//         //     res += 1;
//         // cout << res << endl;
//         res = res * 2 + temp;
//         res << 1;
//         // cout << uint32_t(res) << endl;
//     }
//     cout << endl << res << endl;
//     cout << (uint32_t)res << endl;
// }

// #include<iostream>
// using namespace std;
// class A{
//     public:
//         A(int i):val(i){
//             cout << "调用了构造函数" << endl;
//         }
//         A(const A&a){
//             cout << "调用了拷贝构造函数" << endl;
//         }
//     public:
//         int val;
// };
// int main(){
//     A a(3);
//     A& aa = a;
//     cout << aa.val << endl;

//     A aaa = a;

// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     // vector<int> v = {4, 1, 2, 1, 2};
//     // int ans = 0;
//     // for(int i : v){
//     //     cout << ans << endl;
//     //     ans ^= i;
//     //     cout << ans << endl;
//     //     cout << endl;
//     // }
//     // cout << ans;

//     cout << (3 & 4) << endl;
//     cout << ()
// }

// #include<iostream>
// #include<iterator>
// using namespace std;
// int main(){
//     istream_iterator<int> in(cin), eos;
//     cout << "请输入:" << endl;
// }

// // 分糖果问题leecode 135
// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
// public:
//     bool fun(int index, vector<int>& ratings, vector<int>& c){
//         cout << "index:" << index << endl;
//         bool flag = false;
//         if(index - 1 >= 0 && ratings[index] > ratings[index - 1] && c[index] <= c[index - 1]){
//             flag = true;
//             c[index] ++;
//         }
//         if(index + 1 <= ratings.size() - 1 && ratings[index] > ratings[index + 1] && c[index] <= c[index + 1]){
//             flag = true;
//             c[index] ++;
//         }
//         for(auto i : c){
//             cout << i << ' ';
//         }
//         cout << endl;
//         // if(flag)
//         //     fun(index, ratings, c);
//         return flag;
//     }
//     void gengxin(int i, vector<int> &ratings, vector<int>& c){
//         for(int j = 0; j <= i; ++ j){
//             while(fun(j, ratings, c))
//                 gengxin(i, ratings, c);
//         }
//     }
//     void gengxin(int i, vector<int> &ratings, vector<int>& c){
//         for(int j = i - 1; j >= 0; -- j){
//             if(fun(j, ratings, c))
//                 while(fun(j, ratings, c));
//             else
//                 break;
//         }
//     }
//     int candy(vector<int>& ratings) {
//         vector<int> c(ratings.size(), 1);
//         for(int i = 0; i < ratings.size(); ++ i){
//             if(fun(i, ratings, c) || i == ratings.size() - 1){
//                 cout << "需要改变" << endl;
//                 gengxin(i, ratings, c);
//             }
//         }
//         int sum = 0;
//         for(auto i : c){
//             sum += i;
//         }
//         return sum;
//     }
// };
// int main(){
//     vector<int> ratings = {1,2,87,87,87,2,1};
//     // vector<int> ratings = {370,28,37,15,379,458,342,346,328,257,81,400,426,461,349,362,315,410,427,458,264,322,326,350,369,383,184,343,402,274,184,124,154,73,491,33,31,333,379,212,91,313,112,369,274,461,83,441,223,362,399,339,185,77,189,406,312,373,249,66,147,433,191,153,358,182,187,242,368,418,454,311,231,418,180,358,379,115,151,454,478,403,293,163,480,482,69,145,207,318,63,207,103,254,360,313,289,399,55,9,318,361,320,401,279,352,111,10,319,263,464,297,18,109,460,350,91,381,495,151,51,59,358,6,165,218,320,306,118,375,315,288,89,487,41,368,191,5,379,11,120,195,308,138,305,121,488,248,2,336,399,406,395,257,412,412,328,232,71,446,460,238,86,49,226,127,417,269,132,148,280,104,344,441,242,1,414,231,101,416,419,1,174,314,110,87,78,438,319,149,236,279,388,322,328,466,302,98,235,286,246,368,391,442,161,133,295,75,216,397,343,135,250,18,301,360,105,232,299,424,381,35,56,121,210,384,439,12,482,175,298,81,395,41,23,408,175,171,483,243,68,178,231,318,48,32,178,153,116,329,430,498,217,338,471,279,222,411,291,57,438,441,490,185,483,365,93,10,36,428,105,104,106,336,274,155,221,305,160,337,134,442,335,203,280,159,482,355,70,125,412,360,67,254,45,402,119,138,412,156,66,17,112,24,206,387,179,427,192,192,264,178,134,452,382,415,111,216,270,33,342,34,393,261,288,290,163,407,428,427,63,346,444,176,370,2,415,402,429,107,94,194,285,80,146,19,495,109,236,117,494,78,151,387,191,439,29,354,199,457,281,114,155,77,290,25,80,57,279,361,164,225,55,302,306,53,321,153,14,57,271,8,487,422,247,178,214,276,384,413,233,17,27,240,95,170,118,27,227,397,388,244,475,296,46,281,201,367,434,216,277,57,224,264,332,472,295,398,248,179,311,334,197,190,74,144,212,192,23,292,442,263,388,417,411,434,50,113,153,336,329,430,394,53,47,226,377,194,124,126,225,287,312,274,329,238,418,394,283,293,186,225,409,426,494,320,360,44,433,365,380,262,148,126,316,47,204,45,241,180,23,466,467,335,241,149,426,11,43,209,157,81,286,66,7,280,386,219,176,320};
//     Solution s;
//     cout << s.candy(ratings);
// }

// #include<iostream>
// using namespace std;
// int main(){
//     typedef int i;
//     i a = 1;
//     cout << a;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// using namespace std;
// class Solution {
// public:
//     bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//         int cnt = 0;
//         int flag = 0;
//         if(flowerbed.size() == 1 && flowerbed[0] == 0 && n == 1)
//             return true;
//         //不种花直接返回true
//         if(n == 0)
//             return true;

//         for(int i = 0; i < flowerbed.size(); ++ i){
//             while(flowerbed[i] == 0 && i < flowerbed.size()){
//                 if(i == 0 || i == flowerbed.size() - 1)
//                     flag = 1;
//                 cnt ++;
//                 i ++;
//             }
//             cout << cnt << endl;
//             if(i == flowerbed.size() || flowerbed[i] == 1){
//                 if(cnt){
//                     cout << "flag:" << flag << endl;
//                     if(flag){
//                         n -= cnt / 2;
//                     }
//                     if(i == flowerbed.size())
//                         n --;
//                     else if(!flag && cnt > 2){
//                         if(cnt % 2 == 0)
//                             n -= cnt / 2 - 1;
//                         else
//                             n -= cnt / 2;
//                     }
//                 }
//                 cout << "n : " << n << endl;
//                 cnt = 0;
//                 flag = 0;
//                 if(i == flowerbed.size())
//                     return n <= 0;
//             }
//         }
//         return n <= 0;
//     }
// };
// int main(){
//     vector<int> v = {1,0};
//     Solution s;
//     cout << s.canPlaceFlowers(v,1);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
// public:
//     bool checkPossibility(vector<int>& nums) {
//         int res = 0;
//         int temp = nums[0];
//         for(int i = 0; i < nums.size(); ++ i){
//             if(nums[i] < temp){
//                 res ++;
//                 temp = nums[i] < temp ? nums[i] : temp;
//             }
//         }
//         return res <= 1;
//     }
// };
// int main(){
//     vector<int> v = {3,4,2,3};
//     Solution s;
//     cout << s.checkPossibility(v);
// }

// #include<iostream>
// using namespace std;
// class A{
// public:
//     A(){
//         cout << "调用了构造函数！" << endl;
//     };
//     void operator() (){
//         cout << "调用了()运算符！" << endl;
//     };
// };
// int main(){
//     A *a = new A();
//     A b;
//     A c = A();
//     (*a)();
// }

// #include<iostream>
// using namespace std;
// class A{
// public:
//     A(){
//         cout << "调用了构造函数！" << endl;
//     };
//     virtual void fun(int i = 0){
//         cout << "调用了基类的fun函数,i=" << i <<  endl;
//     };
//     void operator() (){
//         cout << "调用了()运算符！" << endl;
//     };
// };

// class B : public A{
// public:
//     B(){
//         cout << "调用了b的构造函数" << endl;
//     };
//     void fun(int i = 1){
//         cout << "调用了派生类的fun函数,i=" << i <<  endl;
//     };
// };
// int main(){
//     A a;
//     B b;
//     A *pa = &a, *pb = &b;
//     b.fun();
//     pa -> fun();// 基类的fun函数
//     pb -> fun();// 派生类的fun函数

//     // B *qa = &a;// 出错
//     B *qb = &b;
//     // qa -> fun();// 出错
//     qb -> fun();// 派生类的fun函数
// }

// #include<iostream>
// using namespace std;
// class A{
//     public:
//         void operator()(const int a) const{
//             cout << "调用了（）函数";
//         }
// };
// int main(){
//     A a;
//     a(1);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n = 5;
//     vector<int> v(n, 0);
//     v[0] = 0;
//     v[1] = 1;
//     for(int i = 2; i <= n; ++ i){
//         v[i] = v[i - 1] + v[i - 2];
//         cout << v[i] << endl;
//     }
//     return v[n];
// }

// #include<iostream>
// using namespace std;
// int main(){
//     const int a = 3;
//     int b = 4;

//     int temp = 100;
//     int *t = &temp;
    
//     const int *p = &a; //指针常量
//     p = &b; //可以改变指向
//     p = t; //可以改变指向
//     // *p = temp; 因为*p是const类型，所以不能改变它的值

//     int* const q = &b;
//     // int * const q = &a; a是const，而*q时int类型，不能转换
//     // q = &temp; 不能改变q的值，即指向
//     // q = t;同上
//     *q = temp; //可以改变指向的值
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int i = 97;
//     cout << char(i) << endl;

//     char j = ' ';
//     cout << int(j) << endl;

//     vector<int> v(j);
//     cout << v.size() << endl;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a[2] = {1, 2};
//     int *p = &a[0];
//     int temp[2] = {3, 4};
//     cout << "数组a里的元素：" << endl;
//     for(auto i : a){
//         cout << i << endl;
//     }
//     cout << "数组名temp:" << temp << endl;
//     cout << "数组名a：" << a << endl;
//     cout << "指向数组a第一个元素的指针值p：" << p << endl;

//     *a = *temp; // 这里改变的是a数组中第一个元素的值
//     // cout << "a ++ 之后：" << ++ a << endl;// 报错，因为a是常量指针，不能改变地址值
//     cout << "数组a里的元素：" << endl;
//     for(auto i : a){
//         cout << i << endl;
//     }
//     cout << "数组名a：" << a << endl;
//     cout << "p ++ 之后：" << ++ p << endl;
//     cout << "p ++ 之后所指向的值：" << *p << endl;// p指针可以后移到数组下一个元素
// }



// // 测试大小端存储
// #include<iostream>
// using namespace std;
// // 使用联合体
// union endian{
//     int a;
//     char ch;
// };
// int main(){
//     // 使用类型转换
//     int a = 0x1234;
//     cout << a << endl;

//     char c = (char)(a);
//     cout << c << endl;

//     if(c == 0x12){
//         cout << "大端存储" << endl;
//     }
//     if(c == 0x34){
//         cout << "小端存储" << endl;
//     }

//     endian value;
//     value.a = 0x1234;
//     if(value.ch == 0x12){
//         cout << "大端" << endl;
//     }
//     if(value.ch == 0x34){
//         cout << "小端" << endl;
//     }
// }


// #include<iostream>
// using namespace std;
// class A{
//     public:
//         virtual int fun(int a = 10){
//             cout << a << endl;
//             return a;
//         }
// };

// class B : A{
//     public:
//         int fun(int b = 5){
//             cout << b << endl;
//             // return b + 'a';
//         }
// };

// int main(){
//     B b;
//     b.fun(10);
// }


// #include<iostream>
// using namespace std;
// class A{
//     private:
//         int a;
//         const int b = 2;
//     public:
//         const void fun(int temp){
//             cout << "访问到了A的static类型的fun函数" << endl;
//         }
// }
// int main() {
//     A a;

// }


// #include<iostream>
// using namespace std;
// int main(){
//     // int a = 1;
//     // int b = a;
//     // cout << &a << endl;
//     // cout << &b << endl;


//     int a = 2;
//     int *p = &a;
//     cout << &a << endl;
//     cout << p << endl;
//     cout << &p << endl;
// }


// #include<iostream>
// using namespace std;
// class A{
//     public:
//         const int const_val = 1;
//         int normal_val = 2;
//         void const_fun() const{
//             cout << "访问了const函数" << endl;
//         }
//         void normal_fun(){
//             cout << "访问了普通函数" << endl;
//         }
// };
// int main(){
//     const A const_a;
//     A normal_a;

//     const_a.const_fun();
//     cout << const_a.const_val << endl;
//     // const_a.normal_fun();
//     cout << const_a.normal_val << endl;

//     normal_a.const_fun();
//     cout << normal_a.const_val << endl;
//     normal_a.normal_fun();
//     cout <<normal_a.normal_val << endl;

//     // const_a.const_val = 2;
//     // const_a.normal_val = 3;
//     // normal_a.const_val = 4;
//     normal_a.normal_val = 5;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     int &b = a;
//     cout << &a << endl;
//     cout << &b << endl;

//     cout << a << endl;
//     cout << b << endl;
// }


#include<iostream>
using namespace std;
int main(){
    int a = 1;
    int &b = a;
    int temp = 2;

    cout << a << endl;
    cout << b << endl;

    cout << &a << endl;
    cout << &b << endl;

    int *p = &a;
    int *q = &b;

    *p = temp;
    
    cout << p << endl;
    cout << q << endl;

    cout << *p << endl;
    cout << *q << endl;

    p ++;
    q ++;

    cout << p << endl;
    cout << q << endl;

    cout << *p << endl;
    cout << *q << endl;
}