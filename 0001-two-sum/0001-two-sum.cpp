class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // unordered_map<int, int> mpp;
        // for(int i=0;i<nums.size();i++){
        //     if(mpp.find(target-nums[i])!=mpp.end()){
        //         return {i,mpp[target-nums[i]]};
        //     }
        //     mpp[nums[i]]=i;
        // }
        // return {}; 
        vector<pair<int,int>> arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        int i=0;
        int j=nums.size()-1;
        int n=nums.size();
        while(i<j){
            if(arr[i].first+arr[j].first==target){
                return {arr[i].second,arr[j].second};
            }
            else if(arr[i].first+arr[j].first>target){
                j--;
            }
            else{
                i++;
            }
        }
        return {i,j}; 
    }
};