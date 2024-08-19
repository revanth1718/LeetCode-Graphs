class Solution {
public:
    int numIdenticalPairs(vector<int>& arr) {
        unordered_map<int,int>mp;
	int ans=0;
	for(auto i : arr){
		mp[i]++;
		
	}
	
	for(auto i: mp){
		if(i.second>1){
		ans+=((i.second *(i.second-1))/2);
		}
		
	}
	return ans;
    }
};