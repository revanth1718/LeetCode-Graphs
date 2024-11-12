class Solution {
public:
    int minProcessingTime(vector<int>& p, vector<int>& t) {
        sort(t.begin(),t.end());
        sort(p.rbegin(),p.rend());
        int maxi = 0,i =0,j=0;
        
        while(i < t.size()){
            int temp = t.size()/p.size();
            while(temp--) maxi = max(maxi,(p[j]+t[i++]));
            j++;

        }
        return maxi;
    }
};