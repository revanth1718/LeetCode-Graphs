class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        // map1 and map2 respectively.
       map<int, int> mp1, mp2;
        for (auto num : nums1) {
            mp1[num]++;
        }
        for (auto num : nums2) {
            mp2[num]++;
        }



        // to store the common values.
        set<int> s;

       for(auto i: nums2)
        {
            // if we found a match then we need to insert it into set.
            if(mp1.find(i)!=mp1.end()) s.insert(i);
        }

        vector<int> v1;
        vector<int> v2;

        // filter the non-common elements of NUMS1.
        for(auto i: mp1)
        {
            if(s.find(i.first)==s.end()) v1.push_back(i.first);
        }

        // filter the non-common elements of NUMS2.
        for(auto i: mp2)
        {
            if(s.find(i.first)==s.end()) v2.push_back(i.first);
        }

        return {v1,v2};
    }
};