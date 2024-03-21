#include <bits/stdc++.h> 
bool isPeriodic(string s) {
    int n=s.size();
    for(int i=1; i<=n/2; i++){
        if(n%i==0){
          bool  isPeriodic=true;
            for(int j=i+1; j<n; j++){
                if(s[j]!=s[j%i]){
                    isPeriodic=false;
                    break;
                }
            }
            if(isPeriodic){
                return true;
            }
        }
    }
    return false;
   
}