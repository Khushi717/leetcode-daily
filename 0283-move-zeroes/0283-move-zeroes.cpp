class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int zero=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero=i;
                break;
            }
        }if(zero==-1){
            return;
        }
        int nonzero=-1;
        for(int i=zero;i<n;i++){
            if(nums[i]!=0){
                nonzero=i;
                break;
            }
        }
        if(nonzero==-1){
            return;
        }
        for(int nonzero=zero+1;nonzero<n;nonzero++){
            if(nums[nonzero]!=0){
            swap(nums[zero],nums[nonzero]);
            zero++;
            }
        }
    }
};