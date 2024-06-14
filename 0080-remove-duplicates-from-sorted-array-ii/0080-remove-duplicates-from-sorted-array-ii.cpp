class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mpp;
        int n=nums.size();
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        int ind=0;

        for(auto it:mpp){
            int n=min(2, it.second);
            for(int i=1; i<=n; i++){
                nums[ind++]=it.first;
            }
        }
        return ind;
        
    }
};