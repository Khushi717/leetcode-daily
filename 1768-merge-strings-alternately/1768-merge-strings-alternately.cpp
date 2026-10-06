class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        int n=word1.size();
        int nn=word2.size();
        bool yes=true;
        string ans="";
        while(i<n && j<nn){
            if(yes){
            ans+=word1[i];
            i++;
            yes=false;
            }
            else{
            ans+=word2[j];j++;
            yes=true;
        }
        }
            while(i<n){
                ans+=word1[i];
                i++;
            }
            while(j<nn){
                ans+=word2[j];
                j++;
            }
        return ans;
    }
};