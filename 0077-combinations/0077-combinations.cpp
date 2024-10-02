class Solution {
public:
    void solve(int n, int k, vector<int>& temp1, vector<int>& temp2, vector<vector<int>>& ans) {
  
        if (n >= temp1.size() || k == 0) {
            if (k == 0) {
                ans.push_back(temp2); 
            }
            return; 
        }
        

        solve(n + 1, k, temp1, temp2, ans);
        

        temp2.push_back(temp1[n]);
        solve(n + 1, k - 1, temp1, temp2, ans);
        temp2.pop_back();
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp2;
        vector<int> temp1;
        
        for (int i = 1; i <= n; i++) {
            temp1.push_back(i);
        }

       
        solve(0, k, temp1, temp2, ans);

        return ans; 
    }
};
