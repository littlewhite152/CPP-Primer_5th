/*
 * @lc app=leetcode.cn id=417 lang=cpp
 *
 * [417] 太平洋大西洋水流问题
 */

// @lc code=start
class Solution {
public:
    void dfs(vector<vector<int>>& heights, int i, int j, vector<vector<bool>> &can_reach){
        if(can_reach[i][j])
            return;
        can_reach[i][j] = true;
        int m = heights.size(), n = heights[0].size();
        vector<int> d = {-1, 0, 1, 0, -1};
        int x, y;
        for(int k = 0; k < d.size() - 1; ++ k){
            x = i + d[k];
            y = j + d[k + 1];
            if ( (x >= 0 && x < m) && (y >= 0 && y < n) ){
                if(heights[i][j] <= heights[x][y]){
                    dfs(heights, x, y, can_reach);
                }
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size(), n = heights[0].size();
        vector<vector<int>> res;
        if(heights.empty() || heights[0].empty())
            return {};
        vector<vector<bool>> can_reach_p(m, vector(n, false));
        vector<vector<bool>> can_reach_a(m, vector(n, false));
        for(int i = 0; i < m; ++ i){
            dfs(heights, i, 0, can_reach_p);
            dfs(heights, i, n - 1, can_reach_a);
        }
        for(int j = 0; j < n; ++ j){
            dfs(heights, 0, j, can_reach_p);
            dfs(heights, m - 1, j, can_reach_a);
        }
        for(int i = 0; i < m; ++ i){
            for(int j = 0; j < n; ++ j){
                if(can_reach_a[i][j] && can_reach_p[i][j])
                    res.push_back(vector<int>{i, j});
            }
        }
        return res;
    }
};
// @lc code=end

