class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp;
        long long ans=0;
        for(int i=0;i<n;i++){
            temp.push_back(abs(nums[i]));
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<n/2;i++){
            ans-=temp[i]*temp[i];
        }
        for(int i=n/2;i<n;i++){
            ans+=temp[i]*temp[i];
        }
        return ans;
    }
};