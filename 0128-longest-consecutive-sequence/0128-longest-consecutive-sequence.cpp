class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> set ;
        int l =1;
        if(n == 0) return 0;
        for(int i =0;i<n;i++){
            set.insert(nums[i]);
        }
        for(auto i : set){
            if(set.find(i-1) == set.end()){
                int c =1;
                int x = i;
                while(set.find(x+1)!= set.end()){
                    x= x+1;
                    c++;
                }
                l = max(l,c);
            }

        }
        return l;


        
    }
};