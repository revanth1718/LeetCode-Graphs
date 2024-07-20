class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int m = nums.size();
        int n = nums[0].size();
        int s = 0;
        for(int i=0;i<m;i++){
            sort(nums[i].begin(),nums[i].end());
        }
        for(int i=n-1;i>=0;i--){
            int maxi=INT_MIN;
            for(int j=0;j<m;j++){
                if(nums[j][i]>maxi){
                    maxi=nums[j][i];
                }
            }
            s += maxi;
        }
        return s;

    }
};