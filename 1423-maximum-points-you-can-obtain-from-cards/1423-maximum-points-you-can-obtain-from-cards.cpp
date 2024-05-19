class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int l=k-1;
        int sum=0;
        for(int i=0; i<=l; i++){
            sum+=cardPoints[i];
    }
    int maxResult=sum;
    int r=n-1;
    while(l>-1){
        
        sum=sum-cardPoints[l]+cardPoints[r];
        maxResult=max(maxResult, sum);
        l--;
        r--;
    }
    return maxResult;

        
    }
};