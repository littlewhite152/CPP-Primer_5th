// // #include<iostream>
// // #include<math.h>
// // using namespace std;
// // class Solution {
// // public:
// //     bool judgeSquareSum(int c) {
// //         int l = 0, r = sqrt(c);
// //         while(l * l + r * r != c && l <= r){
// //             cout << l << ":" << r << endl;
// //             if(l * l + r * r < c)
// //                 l ++;
// //             else
// //                 r --;
// //         }
// //         if(l * l + r * r != c)
// //             return false;
// //         return true;
// //     }
// // };
// // int main(){
// //     Solution s;
// //     cout << s.judgeSquareSum(1000);
// // }



// // #include<iostream>
// // #include<math.h>
// // #include<vector>
// // #include<algorithm>
// // using namespace std;
// // class Solution {
// // public:
// //     struct info{
// //         vector<int> v;
// //         string str;
// //     };
    
// //     vector<int> fun(string s, string t){
// //         int index = 0;
// //         vector<int> v;
// //         for(int i = 0; i < t.size(); ++ i){
// //             while(t[i] != s[index] && index < s.size()){
// //                 index ++;
// //             }
// //             if(index < s.size()){
// //                 v.push_back(index);
// //                 index ++;
// //             }
// //             else
// //                 break;
// //         }
// //         return v;

// //     }
// //     static bool compare(info& v1, info& v2){
// //         if(v1.v.size() != v2.v.size())
// //             return v1.v.size() > v2.v.size();
// //         else{
// //             for(int i = 0; i < v1.v.size(); ++ i){
// //                 if(v1.v[i] != v2.v[i])
// //                     return v1.v[i] < v2.v[i];
// //             }
// //             return true;
// //         }
// //     }
// //     string findLongestWord(string s, vector<string>& dictionary) {
// //         vector<int> v;
// //         vector<info> res;
// //         for(int i = 0; i < dictionary.size(); ++ i){
// //             info temp;
// //             temp.v = fun(s, dictionary[i]);
// //             temp.str = dictionary[i];
// //             res.push_back(temp);
// //         }
// //         sort(res.begin(), res.end(), compare);
// //         return res[0].str;
// //     }
// // };
// // int main(){
// //     string s = "abpcplea";
// //     vector<string>d = {"ale","apple","monkey","plea"};
// //     Solution S;
// //     cout << S.findLongestWord(s, d);
// // }




// #include<iostream>
// #include<math.h>
// #include<vector>
// #include<algorithm>
// using namespace std;
// class Solution {
// public:
//     int mySqrt(int x) {
//         int min = 1, max = x, mid = min + (max - min) / 2;
//         do{
//             cout << max << ' ' << min << ' ' << mid << endl;
//             if(mid * mid > x){
//                 max = mid;
//             }
//             else if(mid * mid < x){
//                 min = mid;
//             }
//             if(max - min == 1)
//                 return mid;
//             mid = min + ( max - min ) / 2;
//         }while(max - min != 1);
//         return mid;
//     }
// };
// int main(){
//     int s = 8;
//     Solution S;
//     cout << S.mySqrt(s);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int l = 0, r = nums.size() - 1, mid;
//         while(l < r){
//             if(nums[l] < nums[r])
//                 return nums[l];
//             mid = l + (r - l) / 2;
//             cout << l << " " << mid << ' ' << r << endl;
//             if(nums[mid] < nums[r])
//                 r = mid;
//             else{
//                 // 左边，中间，右边都相同
//                 if(nums[mid] == nums[l] && nums[mid] == nums[r]){
//                     l ++;
//                     continue;
//                 }
//                 if(nums[mid] == nums[r] && nums[l] > nums[r]){
//                     r --;
//                     continue;
//                 }
//                 // 左边，中间相同，右边不同
//                 if(nums[mid] >= nums[r])
//                     l = mid + 1;
//             }
//         }
//         return nums[l];
//     }
// };
// int main(){
//     vector<int> s = {2,0,1,1,1};
//     Solution S;
//     cout << S.findMin(s);
// }


// #include<iostream>
// #include<algorithm>
// #include<map>
// #include<vector>
// #include<queue>
// using namespace std;
// class Solution {
// public:
//     static bool fun(const pair<int, int> p1, pair<int, int> p2){
//         return p1.second > p2.second;
//     }
//     vector<int> topKFrequent(vector<int> &nums, int k){
//         map<int, int> m;
//         for(int i : nums){
//             m[i] ++;
//         }

//         priority_queue< pair<int, int>, vector<pair<int, int>>, decltype(&fun) > q(m);
//         for(auto & [num, count] : m){
//             if(q.size() == k){
//                 if(q.top().second < count){
//                     q.pop();
//                     q.emplace(num, count);
//                 }
//             }
//             else{
//                 q.emplace(num, count);
//             }
//         }
//         vector<int> res;
//         while(!q.empty()){
//             res.push_back(q.top().first);
//             q.pop()
//         };
//         return res;
//     }
// };
// int main(){
//     vector<int> s = {2,0,1,1,1};
//     Solution S;
//     cout << 'j';
//     vector<int> res = S.topKFrequent(s, 2);
// }

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
// class Solution {
// public:
//     void dfs(vector<vector<int>>& isConnected, int index){
//         if(index >= isConnected[index].size() - 1)
//             return;
//         int d = index + 1, count = 0;
//         isConnected[index][index] = 0;
//         while(d + 1 < isConnected[index].size()){
//             d ++;
//             dfs(isConnected, d);
//         }
//     }
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int res = 0;
//         for(int i = 0; i < isConnected.size(); ++ i){
            
//             if(!isConnected[i][i])
//                 continue;
//             cout << i << ": ";
//             stack<int> s;
//             for(int j = i + 1; j < isConnected[i].size(); ++ j){                
//                 if(isConnected[i][j])
//                     s.push(j);
//             }
//             cout << s.size() << endl;
//             while(!s.empty()){
//                 int temp = s.top();
//                 s.pop();
//                 dfs(isConnected, temp);
//             }
//             res ++;
//         }
//         return res;
//     }
// };
// class Solution {
// public:
//     void dfs(vector<vector<int>>& isConnected, int index){
//         isConnected[index][index] = 0;
//         for(int d = 0; d < isConnected.size(); ++ d){
//             if(isConnected[index][d]){
//                 cout << d <<endl;
//                 isConnected[index][d] = 0;
//                 isConnected[d][index] = 0;
//                 dfs(isConnected, d);
//             }
//         }
//     }
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int res = 0;
//         for(int i = 0; i < isConnected.size(); ++ i){
//             if(!isConnected[i][i])
//                 continue;
//             isConnected[i][i] = 0;
//             stack<int> s;
            
//             for(int j = i + 1; j < isConnected[i].size(); ++ j){                
//                 if(isConnected[i][j]){
//                     isConnected[i][j] = 0;
//                     isConnected[j][i] = 0;
//                     s.push(j);
//                 }
//             }
//             while(!s.empty()){
//                 int temp = s.top();
//                 s.pop();
//                 cout << temp;
//                 dfs(isConnected, temp);
//             }
//             res ++;
//             cout << endl;
//         }
//         return res;
//     }
// };
// int main(){
//     vector<vector<int>> v = {{1,0,0,1},{0,1,1,0},{0,1,1,1},{1,0,1,1}};
//     Solution s;
//     s.findCircleNum(v);
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// void backtracking(vector<int> &nums, int level, vector<vector<int>> &ans){
//     if(level == nums.size() - 1){
//         ans.push_back(nums);
//         return;
//     }
//     for(int i = level; i < nums.size(); i ++){
//         swap(nums[i], nums[level]);
//         backtracking(nums, level + 1, ans);
//         swap(nums[i], nums[level]);
//     }
// }
// vector<vector<int>> permute(vector<int>& nums){
//     vector<vector<int>> ans;
//     backtracking(nums, 0, ans);
//     return ans;
// }

// int main(){
//     vector<vector<int>> ans;
//     vector<int> nums = {1, 2, 3};
//     ans = permute(nums);
//     for(auto &i : ans){
//         for(auto item : i){
//             cout << item << ' ';
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// #include<vector>
// #include<set>
// using namespace std;
// class Solution {
// public:
//     void attack(int i, int j, vector<vector<int>> &flag, int n, int resume){
//         int x, y;
//         // cout << "消除" << i << ":" << j << endl;
//         // 所在行和列设为resume
//         for(int k = 0; k < n; ++ k){
//             flag[i][k] += resume;
//             flag[k][j] += resume;
//         }
//         flag[i][j] -= resume;
//         // 斜角设为resume
//         x = i + 1, y = j - 1;
//         while(x >= 0 && x < n && y >= 0 && y < n){
//             flag[x][y] += resume;
//             x ++;
//             y --;
//         }

//         x = i + 1, y = j + 1;
//         while(x >= 0 && x < n && y >= 0 && y < n){
//             flag[x][y] += resume;
//             x ++;
//             y ++;
//         }

//         x = i - 1, y = j - 1;
//         while(x >= 0 && x < n && y >= 0 && y < n){
//             flag[x][y] += resume;
//             x --;
//             y --;
//         }

//         x = i - 1, y = j + 1;
//         while(x >= 0 && x < n && y >= 0 && y < n){
//             flag[x][y] += resume;
//             x --;
//             y ++;
//         }
//         // for(int i = 0; i < n; ++ i){
//         //     for(int j = 0; j < n; ++ j){
//         //         cout << flag[i][j];
//         //     }
//         //     cout << endl;
//         // }
//     }
//     void backstracking(int n, vector<vector<int>> &flag, vector<string> &d, set<vector<string>> &res, int count){
//         // cout << count << endl;
//         if(count == n){
//             cout << "找到！" << endl;
//             for(int i = 0; i < n; ++ i){
//                 cout << d[i] << endl;
//             }
//             cout << "继续！" << endl;
//             res.insert(d);
//             cout << "当前res尺寸：" << res.size() << endl;
//             return;
//         }
//         for(int i = 0; i < n; ++ i){
//             for(int j = 0; j < n; ++ j){
//                 if(flag[i][j] != 1)
//                     continue;
//                 d[i][j] = 'Q';
//                 count ++;
//                 attack(i, j, flag, n, -1);
//                 backstracking(n, flag, d, res, count);
//                 attack(i, j, flag, n, 1);
//                 count --;
//                 d[i][j] = '.';
//             }
//         }
//     }
//     vector<vector<string>> solveNQueens(int n) {
//         vector<vector<int>> flag(n,vector<int>(n, 1));
//         vector<string> d = vector<string>(n, string(n, '.'));
//         set<vector<string>> res;        
//         backstracking(n, flag, d, res, 0);
//         vector<vector<string>> ans(res.begin(), res.end());
//         return ans;
//     }
// };

// int main(){
//     Solution s;
//     int n = 4;
//     vector<vector<string>> ans = s.solveNQueens(4);
    
// }


// #include<iostream>
// #include<string>
// #include<queue>
// #include<map>
// class Solution {
// public:
//     queue<string> fun(vector<string> &wordList, map<string, bool> &flag, string curword, string beginword){
//         int count = 0;
//         queue<string> q;
//         for(int i = 0; i < wordList.size(); ++ i){
//             if(!flag[wordList[i]])
//                 continue;
//             for(int j = 0; j < curword.size(); ++ j){
//                 if(wordList[i][j] != curword[j])
//                     count ++;
//             }
//             if(count == 1){                
//                 q.push(wordList[i]);
//             }
//             count = 0;
//         }
//         return q;
//     }
//     void backtracking(vector<string> &wordList, map<string, bool> &flag, string curword, string beginword, string endWord, vector<string> &path, vector<vector<string>> &res, int &minsize){
//         queue<string> nextq;
//         queue<string> tempq;
//         // 结束遍历
//         // if(flag[curword] == false && curword != beginword)
//         //     return;
//         if(path.size() > minsize){
//             return;
//         }
//         if(curword == endWord){
//             cout << "minsize:" << minsize << endl;
//             cout << "path:";
//             for(int k = 0; k < path.size(); ++ k){
//                 cout << path[k] << ' ';
//             }
//             cout << endl;
//             if(res.empty()){
//                 cout<< "第一次插入res" << endl;
//                 res.push_back(path);
//                 minsize = path.size();
//                 return;
//             }
//             if(path.size() == minsize){
//                 cout<< "同样大则插入" << endl;
//                 res.push_back(path);
//                 return;
//             }
//             if(path.size() <= minsize){
//                 cout<<"比他小，清空再插入" << endl;
//                 res.clear();
//                 res.push_back(path);
//                 minsize = path.size();
//                 return;       
//             }
//         }
//         cout << "curword:" << curword<< endl;
//         nextq = fun(wordList, flag, curword, beginword);
//         tempq = nextq;
//         cout << "下一层:" << endl;
//         cout << tempq.size() << endl;
//         while(!tempq.empty()){
//             cout << tempq.front() << endl;
//             tempq.pop();
//         }
//         while(!nextq.empty()){            
//             curword = nextq.front();
//             nextq.pop();
//             path.push_back(curword);
//             flag[curword] = false;
//             backtracking(wordList, flag, curword, beginword, endWord, path, res, minsize);
//             flag[curword] = true;
//             path.pop_back();
//         }
//     }



//     vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
//         vector<vector<string>> res;
//         vector<string> path;
//         map<string, bool> flag;
//         int minsize = wordList.size();

//         path.push_back(beginWord);
//         for(int i = 0; i < wordList.size(); ++ i){
//             flag[wordList[i]] = true;
//         }
//         backtracking(wordList, flag, beginWord, beginWord, endWord, path, res, minsize);
//         cout << "res:" << endl;
//         for(int i = 0; i < res.size(); ++ i){
//             for(int j = 0; j < res[i].size(); ++ j){
//                 cout << res[i][j] << ' ';
//             }
//             cout << endl;
//         }
//         return res;
//     }
// };

// int main(){
//     Solution s;
//     string begin_word = "qa";
//     string end_word = "sq";
//     vector<string> wordlist = {"si","go","se","cm","so","ph","mt","db","mb","sb","kr","ln","tm","le","av","sm","ar","ci","ca","br","ti","ba","to","ra","fa","yo","ow","sn","ya","cr","po","fe","ho","ma","re","or","rn","au","ur","rh","sr","tc","lt","lo","as","fr","nb","yb","if","pb","ge","th","pm","rb","sh","co","ga","li","ha","hz","no","bi","di","hi","qa","pi","os","uh","wm","an","me","mo","na","la","st","er","sc","ne","mn","mi","am","ex","pt","io","be","fm","ta","tb","ni","mr","pa","he","lr","sq","ye"};
//     s.findLadders(begin_word, end_word, wordlist);
// }

// "qa"
// "sq"
// ["si","go","se","cm","so","ph","mt","db","mb","sb","kr","ln","tm","le","av","sm","ar","ci","ca","br","ti","ba","to","ra","fa","yo","ow","sn","ya","cr","po","fe","ho","ma","re","or","rn","au","ur","rh","sr","tc","lt","lo","as","fr","nb","yb","if","pb","ge","th","pm","rb","sh","co","ga","li","ha","hz","no","bi","di","hi","qa","pi","os","uh","wm","an","me","mo","na","la","st","er","sc","ne","mn","mi","am","ex","pt","io","be","fm","ta","tb","ni","mr","pa","he","lr","sq","ye"]



// #include<iostream>
// #include<string>
// #include<queue>
// #include<map>
// class Solution {
// public:
//     queue<string> fun(vector<string> &wordList, map<string, bool> &flag, string curword, string beginword){
//         int count = 0;
//         queue<string> q;
//         for(int i = 0; i < wordList.size(); ++ i){
//             if(!flag[wordList[i]])
//                 continue;
//             for(int j = 0; j < curword.size(); ++ j){
//                 if(wordList[i][j] != curword[j])
//                     count ++;
//             }
//             if(count == 1){                
//                 q.push(wordList[i]);
//             }
//             count = 0;
//         }
//         return q;
//     }
//     void backtracking(vector<string> &wordList, map<string, bool> &flag, string curword, string beginword, string endWord, vector<string> &path, vector<vector<string>> &res, int &minsize){
//         // 结束遍历的条件
//         auto p = find(q.begin(), q.end(), endWord);
//         if(p != q.end())
//             return;
//     }



//     vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {

//     }
// };

// int main(){
//     Solution s;
//     string begin_word = "qa";
//     string end_word = "sq";
//     vector<string> wordlist = {"si","go","se","cm","so","ph","mt","db","mb","sb","kr","ln","tm","le","av","sm","ar","ci","ca","br","ti","ba","to","ra","fa","yo","ow","sn","ya","cr","po","fe","ho","ma","re","or","rn","au","ur","rh","sr","tc","lt","lo","as","fr","nb","yb","if","pb","ge","th","pm","rb","sh","co","ga","li","ha","hz","no","bi","di","hi","qa","pi","os","uh","wm","an","me","mo","na","la","st","er","sc","ne","mn","mi","am","ex","pt","io","be","fm","ta","tb","ni","mr","pa","he","lr","sq","ye"};
//     s.findLadders(begin_word, end_word, wordlist);
// }

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n);
        for(int i = 0; i < n; ++ i){
            res[i].resize(n);
        }
        int t = 0, b = n - 1, r = n - 1, l = 0;
        int num = 1;
        while(true){
            // 上
            for(int i = l; i <= r; ++ i){
                res[t][i] = num ++;
            if(t ++ >= b)
                break;
            // 右
            for(int i = t; i <= b; ++ i)
                res[i][r] = num ++;
            if(r -- <= l)
                break;
            // 下
            for(int i = r; i >= l; -- i)
                res[b][i] = num ++;
            if(b -- >= t)
                break;
            // 左
            for(int i = b; i >= t; -- i)
                res[i][l] = num ++;
            if(l ++ >= r)
                break;
        }
        return res;
        }
    }
};
int main(){
    Solution s;
    auto res = s.generateMatrix(3);
    for(int i = 0; i < 3; ++ i){
        for(int j = 0; j < 3; ++ j){
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}