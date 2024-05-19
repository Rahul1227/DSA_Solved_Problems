class Solution {
public: 
    int mini(int a,int b, int c){
        if(a<b && a<c) return a;
        if(b<a && b<c) return b;
        return c;
    }
public:
    int numberOfSubstrings(string s) {
        int count=0;
        vector<int> hash(3, -1);
        int n=s.size();
        for(int i=0; i<n; i++){
            hash[s[i]-'a']=i;

            if(hash[0]!=-1 && hash[1]!=-1 && hash[2]!=-1){
                count+= (1 + mini(hash[0], hash[1], hash[2]));
            }
        }
        return count;
        
    }
};