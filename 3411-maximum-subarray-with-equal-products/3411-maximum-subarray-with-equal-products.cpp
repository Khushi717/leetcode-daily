class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            __int128 prod=1;
            int g=0;
            int l=1;
            for(int j=i;j<n;j++){
                __int128 maxi = (__int128)(((unsigned __int128)1 << 127) - 1);
                if(prod>maxi/nums[j]) break;
                prod*=nums[j];
                g=gcd(g,nums[j]);
                l=lcm(l,nums[j]);
                if(prod==l*g)
                ans=max(j-i+1,ans);
            }
        }
        return ans;
    }
};