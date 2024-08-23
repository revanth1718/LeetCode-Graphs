class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>v , int ind, int tar, vector<int>tmp, int k){
        if(tar< 0 ) return;
        if(tar == 0){
            if(tmp.size() == k) ans.push_back(tmp);
            return;
        }

        for(int i = ind; i<9;i++){
            if(i>ind && v[i] == v[i-1]) continue;
            if(v[i] > tar) return;
            tmp.push_back(v[i]);
            solve(v,i+1,tar-v[i],tmp,k);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v={1,2,3,4,5,6,7,8,9};
        vector<int> tmp;
        solve(v,0,n,tmp,k);
        return ans;
    }
};