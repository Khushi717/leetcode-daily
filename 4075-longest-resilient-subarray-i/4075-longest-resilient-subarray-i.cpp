class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=1;
        for(int i=0;i<n;i++){
            int sum=0;
            int rem=nums[i]%k;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(nums[j]%k!=rem){
                    break;
                }
                if(sum%k==rem){
                    ans=max(ans,j-i+1);
                }
                // bool y=true;
                // for(int l=i;l<=j;l++){
                // if((sum-nums[l])%k!=0){
                //     y=false;
                //     break;
                // }
                // }
                // if(y)
                // ans=max(ans,j-i+1);
            }
        }
        return ans;

    }
};