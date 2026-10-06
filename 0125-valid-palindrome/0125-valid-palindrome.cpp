class Solution {
public:
    bool isPalindrome(string s) {
        string ss="";
        for(auto c : s){
            if(isalnum(c)){
                ss+=tolower(c);
            }
        }
        int i=0;
        int j=ss.size()-1;
        while(i<j){
            if(ss[i]!=ss[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};