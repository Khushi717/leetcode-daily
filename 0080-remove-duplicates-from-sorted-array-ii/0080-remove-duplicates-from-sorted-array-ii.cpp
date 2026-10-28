class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mpp;
        for(auto itr : nums){
            mpp[itr]++;
        }
        int ans=0;
        for(auto itr : mpp){
            if(itr.second>2){
                ans+=itr.second-2;
            }
        }
        vector<int> oj;
        int prev=-10000;
         for(int i=0;i<n;i++){
            if(nums[i]!=prev){
                prev=nums[i];
            if(mpp[nums[i]]>=2){
                oj.push_back(nums[i]);
                oj.push_back(nums[i]);
            }
            else if(mpp[nums[i]]==1){
                oj.push_back(nums[i]);
            }
            }
         }
        nums=oj;
        return n-ans;
    }
};