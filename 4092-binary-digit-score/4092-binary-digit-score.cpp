class Solution {
public:
    int calculateScore(int a, int b) {
        string aa="";
        while(a>0){
            aa+=(a%2)+'0';
            a=a/2;
        }
        string bb="";
        while(b>0){
            bb+=(b%2)+'0';
            b=b/2;
        }
        int s1=0;
        int s2=0;
        for(int i=0;i<aa.size();i++){
            if(aa[i]=='1'){
                s1++;
            }
        }
        for(int i=0;i<bb.size();i++){
            if(bb[i]=='1'){
                s2++;
            }
        }
        if(s1>=s2){
            return s2*s1;
        }
        return s2/s1;
        
    }
};