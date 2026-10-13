class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans={-1,-1};
        int product=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && nums[i]>nums[j] && nums[i]+nums[j]==target){
                    if(product<nums[i]*nums[j]){
                        product=nums[i]*nums[j];
                        ans={i,j};
                    }
                }
            }
        }
        return ans;
    }
};