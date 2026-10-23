class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> ans;
        for(int i=0;i<chars.size();i++){
            int cnt=0;
            char c=chars[i];
            while(i<chars.size() && c==chars[i]){
                i++;
                cnt++;
            }
            ans.push_back(c);
            i--;
            if(cnt==1)continue;
            if(cnt<=9)
            ans.push_back(cnt+'0'); //num to char
            else{
                string ss="";
                while(cnt>0){
                    ss+=(cnt%10)+'0'; //num to char
                    cnt/=10;
                }
                reverse(ss.begin(),ss.end());
                for(auto itr : ss){
                    ans.push_back(itr);
                }
            }
        }
        chars=ans;
        return ans.size();
    }
};