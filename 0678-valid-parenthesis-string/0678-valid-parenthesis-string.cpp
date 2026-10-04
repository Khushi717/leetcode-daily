class Solution {
public:
    bool checkValidString(string s) {
        stack<int> left;
        stack<int> star;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                left.push(i);
            }
            else if(s[i]=='*'){
                star.push(i);
            }
            else if(s[i]==')' && !left.empty() && i>left.top()){
                left.pop();
            }
            else if(s[i]==')' && !star.empty() && i>star.top()){
                star.pop();
            }
            else{
                return false;
            }
        }
        if(!left.empty() && star.empty()){
            return false;
        }
        if(!left.empty() && !star.empty()){
            while(!left.empty() && !star.empty()){
                if(left.top()<star.top()){
                    left.pop();
                    star.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(left.empty()){
            return true;
        }
        return false;
    }
};