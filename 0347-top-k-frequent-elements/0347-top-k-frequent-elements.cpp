class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;

        for(int n : nums){
            freq[n]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for( auto &[num,fre]: freq){
            bucket[fre].push_back(num);
        }
        vector<int>ans;
        for(int i = bucket.size()-1 ; i>=0 && k>0;i--){
            for(int j : bucket[i]){
                ans.push_back(j);
                if(--k == 0){
                    return ans;
                }
            }
        }
        return ans;

        
    }
};