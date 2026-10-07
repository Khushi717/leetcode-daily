class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            int k=0;
            int j=words[i].size()-1;
            bool o=false;
            while(k<j){
                if(words[i][k]!=words[i][j]){
                    o=true;
                    break;
                }
                k++;
                j--;
            }
            if(!o){
                return words[i];
            }
        }
        return "";
    }
};