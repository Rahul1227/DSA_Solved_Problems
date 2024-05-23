class Solution {
public:
    int maxPower(string s) {
         int n=s.size();
        int l=0, r=0;
        int currsize=0;
        int maxsize=0;
        while(r<n){
            if(s[r]==s[l]){
                currsize++;
                r++;
            }
            maxsize=max(maxsize, currsize);
            if(s[r]!=s[l]){
                currsize=1;
                l=r;
                r++;
            }
        }

     return maxsize;   
        
        
    }
};