class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = INT_MAX;
        int l =0,r=0,sum = 0;
        int n = nums.size();
        while(r<n){
            sum += nums[r];
            while(sum >= target){
                res = min(res, r-l+1);
                sum -= nums[l];
                l++;
            }
            r++;
        }
        if(res == INT_MAX){
            return 0;
        }
        else{
            return res;
        }
    }
};