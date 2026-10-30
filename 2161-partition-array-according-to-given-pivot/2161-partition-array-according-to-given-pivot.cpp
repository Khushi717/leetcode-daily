class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
         vector<int> big,ans;
         int cnt=0;
         for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                ans.push_back(nums[i]);
            }
            else if(nums[i]==pivot){
                cnt++;
            }
            else{
                big.push_back(nums[i]);
            }
         }
         for(int i=1;i<=cnt;i++){
            ans.push_back(pivot);
         }
         for(int i=0;i<big.size();i++){
            ans.push_back(big[i]);
         }
        return ans;
    }
};