class Solution {
public:
    int numberOfSubarrays(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> nums(n,-1);
        for(int i=0; i<n; i++){
            if((arr[i]&1)==1) nums[i]=1;
            else nums[i]=0;
        }
        unordered_map<int, int> mpp;
        int count=0;
        int sum=0;
        mpp[0]=1;
        for(int i=0; i< n; i++){
            sum+=nums[i];
            int rem=sum-k;
            count+=mpp[rem];
            mpp[sum]++;
        }
        return count;
        
    }
};