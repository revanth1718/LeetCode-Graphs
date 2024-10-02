class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0,c2=0;
        int el1 = INT_MIN,el2 = INT_MIN;
        vector<int>ans;
        for(int i =0;i<nums.size();i++){
            if(c1 == 0 && nums[i] != el2){
                c1++;
                el1 = nums[i];
            }
            else if( c2 == 0 && nums[i] != el1){
                c2++;
                el2 = nums[i];
            }
            else if( nums[i] == el1) c1++;
            else if(nums[i] == el2) c2++;
            else c1-- && c2--;
        }
        c1=0;
        c2 =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == el1) c1++;
            if(nums[i] == el2) c2++;
        }
        int cut = (int)(nums.size())/3;
        if(c1 > cut) ans.push_back(el1);
        if(c2 > cut) ans.push_back(el2);
        return ans;

    }
};