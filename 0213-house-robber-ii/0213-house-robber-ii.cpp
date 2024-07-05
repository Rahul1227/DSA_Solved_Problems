class Solution {
public:
        int fun(vector<int>& nums) {
        int prev=nums[0];
        int prev2=0;
        int n=nums.size();
        int take, notake;
        int curr;
        for(int i=1; i<n; i++){
            take=nums[i];
            if(i-2>=0){
                take+=prev2;
            }

            notake=prev;
            curr=max(take, notake);
            prev2=prev;
            prev=curr;
            
        }
        return prev;
        
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> temp1, temp2;
        for(int i=0; i<n; i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
        return max(fun(temp1), fun(temp2));
    }
};