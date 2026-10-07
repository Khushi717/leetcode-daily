class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        vector<int> res;
        int minip,maxin;
        int l=0,r;
        while(i<n && nums[i]<0){
            maxin=max(maxin,nums[i]);
            l=i;
            i++;
        }
        r=l+1;
        while(l>=0 && r<n){
            if(abs(nums[l])>abs(nums[r])){
                res.push_back(nums[r]*nums[r]);
                r++;
            }
            else{
                res.push_back(nums[l]*nums[l]);
                l--;
            }
        }
        while(l>=0){
            res.push_back(nums[l]*nums[l]);
            l--;
        }
        while(r<n){
            res.push_back(nums[r]*nums[r]);
            r++;
        }
        return res;
    }
};