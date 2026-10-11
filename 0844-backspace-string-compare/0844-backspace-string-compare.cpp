class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss;
        stack<char> tt;
        for(auto i : s){
            if(i=='#'){
                if(!ss.empty())
                ss.pop();
            }
            else{
                ss.push(i);
            }
        }
        for(auto i : t){
            if(i=='#'){
                if(!tt.empty())
                tt.pop();
            }
            else{
                tt.push(i);
            }
        }
        if(ss.size()!=tt.size()){
            return false;
        }
        while(ss.size()>0 && tt.size()>0){
            if(ss.top()!=tt.top()){
                return false;
            }
            ss.pop();
            tt.pop();
        }
        return true;
    }
};