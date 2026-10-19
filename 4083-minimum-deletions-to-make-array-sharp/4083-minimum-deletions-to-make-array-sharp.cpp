class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i+1<n;i++){
            if(nums[i]==nums[i+1]){
                ans++;
            }
        }
        return ans;
    }
};