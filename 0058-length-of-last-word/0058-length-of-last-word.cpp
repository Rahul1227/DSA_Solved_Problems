class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        if(n==1) return n;
        int j=n-1;
        while(s[j]==' '){
            j--;
        }
        int counter=0;

        while(j>=0){
            if(s[j]!=' '){
                counter++;
                j--;
            }else{
                break;
            }
        }
        return counter;
        
    }
};