class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int s = 0;
        int n = nums.size();
        for(auto &i : nums){
            mpp[i]++;
        }
        for(auto &i : mpp){
            if(i.second == 1){
                s += i.first;
            }
        }
        return s;
        
    }
};