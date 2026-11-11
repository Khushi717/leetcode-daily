class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        set<vector<long long>> ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                unordered_set<long long> st; //o1 hashmap
                for(int k=j+1;k<n;k++){
                    long long sum=(long long)nums[i]+nums[j]+nums[k];
                    if(st.find((long long)(target-sum))!=st.end()){
                        vector<long long> temp={nums[i],nums[j],nums[k],(long long)(target-sum)};
                        sort(temp.begin(),temp.end());
                        ans.insert(temp);
                    }
                    st.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> res;
        for(auto i : ans){
            res.push_back({(int)i[0],(int)i[1],(int)i[2],(int)i[3]});
        }
        return res;
    }
};