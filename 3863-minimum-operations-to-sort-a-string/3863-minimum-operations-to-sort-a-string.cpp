class Solution {
public:
    int minOperations(string s) {
        if(s.size()==1){
            return 0;
        }
        string ss=s;
        sort(s.begin(),s.end());
        if(ss==s){
            return 0;
        }
        else if(s.size()==2){
            return -1;
        }
        int high=0;
        int low=0;
        char l='z';
        char h='a';
        for(int i=0;i<ss.size();i++){
            if(ss[i]>h){
                h=ss[i];
                high=i;
            }
            if(ss[i]<l){
                l=ss[i];
                low=i;
            }
        }
        if(ss[0]==l || ss[ss.size()-1]==h){
            return 1;
        }
        bool valid=true;
        if(ss[0]==h && ss[ss.size()-1]==l){
            if(count(ss.begin(),ss.end(),h)!=1) valid=false;
            if(count(ss.begin(),ss.end(),l)!=1) valid=false;
            if(valid)return 3;
        }
        return 2;

    }
};