class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int s1=s.size();
        int s2=s.size();
        if(s1!=s2) return false;

        map<char, char> mpp;
        map<char, char> reverse_mpp;
        for(int i=0; i<s1; i++){
            if(mpp.find(s[i])==mpp.end()){
                if(reverse_mpp.find(t[i])==reverse_mpp.end()){
                    mpp[s[i]]=t[i];
                    reverse_mpp[t[i]]=s[i];
                }else{
                    if(reverse_mpp[t[i]]!=s[i]) return false;
                }
            }else{
                if(mpp[s[i]]!=t[i]) return false;
            }
        }
        return true;
        
    }
};