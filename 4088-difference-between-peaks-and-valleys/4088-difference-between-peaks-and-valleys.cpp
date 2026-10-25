class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        int mini=0;
        for(int i=1;i<n-1;i++){
            if(nums[i]<nums[i-1] && nums[i]<nums[i+1]){
                mini+=nums[i];
            }
            else if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                maxi+=nums[i];
            }
        }
        return maxi-mini;
    }
};