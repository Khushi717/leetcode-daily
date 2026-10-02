class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string ss="";
        for(auto c : s){
            if(isalnum(c)){
                ss+=tolower(c);
            }
        }
        int left=0;
        int right=ss.size()-1;
        while(left<right){
            if(ss[left]!=ss[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};