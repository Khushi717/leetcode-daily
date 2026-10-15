class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int distinctcnt=0;
            unordered_set<int> st;
            for(int j=i;j<n;j++){
                    st.insert(nums[j]);
                    distinctcnt=st.size();
                    ans+=distinctcnt*distinctcnt;
            }
        }
        return ans;
    }
};