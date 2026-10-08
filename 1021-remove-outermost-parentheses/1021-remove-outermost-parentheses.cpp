class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        stack<char> st;
        string ans="";
        int cnt=0;
        for(auto c : s){
            if(c=='('){
                st.push(c);
                cnt++;
            }
            else{
                cnt--;
                st.push(c);
                if(cnt==0){
                    st.pop();
                    string temp="";
                    while(st.size()!=1){
                        temp.push_back(st.top());
                        st.pop();
                    }
                    st.pop();
                    reverse(temp.begin(),temp.end());
                    ans+=temp;
                }
            }
        }
        return ans;
    }
};