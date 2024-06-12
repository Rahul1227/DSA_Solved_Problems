class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxtillhere=0;
        int overallMax=INT_MIN;
        int n=nums.size();
        for(int i=0; i<n; i++){
            maxtillhere+=nums[i];
            overallMax=max(maxtillhere, overallMax);
            if(maxtillhere<0){
                maxtillhere=0;
            }
        }
        return overallMax;
        
    }
};