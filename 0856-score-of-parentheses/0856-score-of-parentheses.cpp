class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int n=s.size();
        st.push(0);
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(0);
            }
            else{
                int t=st.top();
                st.pop();
                if(t==0){
                    st.top()+=1;
                }
                //nested
                else{
                    st.top()+=2*t;
                }
                }
            }
        return st.top();
    }

};