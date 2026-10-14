class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i+1<n;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        int z=0;
        while(z<n && nums[z]!=0){
            z++;
        }
        for(int nz=z+1;nz<n;nz++){
            if(nums[nz]!=0){
            swap(nums[z],nums[nz]);
            z++;
            }
        }
        return nums;
    }
};