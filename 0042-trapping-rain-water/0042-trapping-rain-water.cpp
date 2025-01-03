class Solution {
public:

    vector<int> leftmax(vector<int> &height , int n){
        vector<int>l(n);
         l[0] = height[0];
        for(int i =1;i<n;i++){
            l[i] = max(l[i-1], height[i]);

        }
        return l;
    }

      vector<int> rightmax(vector<int> &height , int n){
        vector<int>r(n);
         r[n-1] = height[n-1];
        for(int i = n-2;i>=0;i--){
            r[i] = max(r[i+1], height[i]);

        }
        return r;
    }

    int trap(vector<int>& height) {
        int n = height.size();
        int sum = 0;
        vector<int>left = leftmax(height,n);
        vector<int> right = rightmax(height,n);
        for(int i =0;i<n;i++){
           int h = min(left[i] , right[i]) - height[i];
           sum += h ;
        }
        return sum;
    }
};