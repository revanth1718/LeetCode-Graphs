class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i =left;i <= right ; i++){
            if(isdivisible(i)){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
    bool isdivisible(int num ){
        int i = num;
        while(i){
            int d = i%10;
            if(d == 0 || num % d !=0 ) return false;
            i /= 10;
        }
        return true;
    }
};