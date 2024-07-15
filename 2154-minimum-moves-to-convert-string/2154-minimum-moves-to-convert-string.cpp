class Solution {
public:
    int minimumMoves(string s) {
        int i=0,ans=0,n=s.size();
        while(i<n){
            if(s[i]=='0') i++;
            if(s[i]=='X'){
                ans++;
                i+=3;
            }
            else i++;
        }
        return ans;
    }
};