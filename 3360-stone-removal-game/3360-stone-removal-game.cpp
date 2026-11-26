class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10)return false;
        int current=10;
        int t=0;
        while(current>0){
            n=n-current;
            current--;
            if(n<0)break;
            t=1-t;
        }
        if(t) return true;
        return false;
    }
};