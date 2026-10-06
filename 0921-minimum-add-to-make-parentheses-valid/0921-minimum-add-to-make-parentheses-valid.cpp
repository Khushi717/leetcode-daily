class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        stack<char> st;
        int cnt=0;
        if(n==0){
            return 0;
        }
        for(auto c : s){
            if(c=='('){
                st.push(c);
                cnt++;
            }
            else{
                if(st.empty()){
                cnt++;
                }
                else{
                    st.pop();
                    cnt--;
                }
            }
        }
        return abs(cnt);
    }
};