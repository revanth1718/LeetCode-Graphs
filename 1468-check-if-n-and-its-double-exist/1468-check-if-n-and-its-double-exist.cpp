class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
       int n = arr.size();
       unordered_map<int,int>mpp;
       for(auto &it : arr){
          if(mpp[it *2] || !(it &1) && mpp[it/2]){
            return true;
          }
         mpp[it]++;
       }
       return false;
    }
};