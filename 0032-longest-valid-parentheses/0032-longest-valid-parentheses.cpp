class Solution {
public:
    int longestValidParentheses(string s) {
        int open=0;
        int close=0;
        int ans=0;
        //left to right traversal
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                open++;
            }else close++;
            if(open==close){
                ans=max(ans,open+close);
            }
            else if(close>open){
                close=0;
                open=0;
            }
        }
        //right to left traversal
        open=0;
        close=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==')'){
                close++;
            }else open++;
            if(open==close){
                ans=max(ans,close+open);
            }
            else if(open>close){
                close=0;
                open=0;
            }
        }
        return ans;
    }
};