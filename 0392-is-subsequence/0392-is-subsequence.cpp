class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l = s.size(), m = t.size();
        int i =0,j = 0;
        while(i < l && j <m){
            if(s[i] == t[j]){
                i++;
            }
            j++;
        }
        return i == l;
    }
};