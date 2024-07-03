class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        if(n==1) return s;
        int j=0;
        while(s[j]==' '){
            j++;
        }
        int lastind=n-1;
        while(s[lastind]==' '){
            lastind--;
        }
        vector<string> ans;
        string temp="";

        while(j<=lastind){
            if(s[j]!=' '){
                temp+=s[j];
            }else if (s[j+1]!=' '){
                
                ans.push_back(temp);
                temp="";
            }
            j++;
        }
        ans.push_back(temp);
       
        string result="";
        int siz=ans.size();
        for(int i=siz-1; i>=0; i--){
            result+=ans[i];
            if(i>0){
                result+=' ';
            }
        }

        
        return result;
    }
};