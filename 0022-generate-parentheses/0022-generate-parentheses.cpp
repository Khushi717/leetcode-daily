class Solution {
public:
set<string> stt;
          bool val(string s){
                    stack<char> st;
        for(char c : s){
            if(c=='(' || c=='[' || c=='{'){
                st.push(c);
            }
            else{
                if(st.empty()){
                    return false;
                }
                else if(c==')' && st.top()=='('){
                    st.pop();
                }
                else if(c=='}' && st.top()=='{'){
                    st.pop();
                }
                else if(c==']' && st.top()=='['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.size()==0)return true;
        return false;
          }
        void func(vector<string> &ans,int n,int left,int right,string curr){
        if(left+right==2*n){
            if(!stt.count(curr)&&val(curr)) {
                ans.push_back(curr);
                stt.insert(curr);
            }
            return;
        }
        curr+="(";
        func(ans,n,left+1,right,curr);
        curr.pop_back();
        curr+=")";
        func(ans,n,left,right+1,curr);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        func(ans,n,0,0,"");
        return ans;
    }
};