class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26]={};
        int n=sentence.size();
        for(int i=0;i<n;i++){
            arr[sentence[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]==0){
                return false;
            }
        }
        return true;
    }
};