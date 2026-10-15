class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n=s.size();
        long long space=0;
        string ans="";
        for(int i=0;i<n;i++){
            if(space<spaces.size() && i==spaces[space]){
                space++;
                ans+=' ';
            }
            ans+=s[i];
        }
        return ans;
    }
};