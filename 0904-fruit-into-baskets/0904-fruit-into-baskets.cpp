class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int i=0;
        unordered_map<int,int> mpp;
        int maxi=1;
        mpp[fruits[i]]=1;
        for(int j=i+1;j<n;j++){
            mpp[fruits[j]]++;
            while(mpp.size()>2){
                mpp[fruits[i]]--;
                if(mpp[fruits[i]]==0){
                    mpp.erase(fruits[i]);
                }
                i++;
            }
            maxi=max(maxi,j-i+1);
        }
        return maxi;
    }
};