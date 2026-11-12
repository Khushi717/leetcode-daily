class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int maxi2=INT_MIN;
        int len=1;
        int len2=1;
        for(int i=1;i<n;i++){
                if(nums[i-1]<nums[i]){
                    len++;
                    maxi=max(maxi,len);
                    len2=1;
                }
                else if(nums[i-1]>nums[i]){
                    len2++;
                    maxi2=max(maxi2,len2);
                    len=1;
                }
                else{
                    len=1;
                    len2=1;

                }
        }
        if(max(maxi,maxi2)==INT_MIN) return 1;
        return max(maxi,maxi2);
    }
};