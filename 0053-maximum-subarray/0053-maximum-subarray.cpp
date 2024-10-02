class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int n = nums.size();
     int s= 0, maxi = INT_MIN;
     for(int i =0;i<n ;i++){
        s += nums[i];
        if(s >maxi){
            maxi = s;
        }
        if(s <0){
            s = 0;

        }
        
     }
     return maxi;
        
    }
};