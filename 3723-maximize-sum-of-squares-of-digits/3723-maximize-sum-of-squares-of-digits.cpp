class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string n="";
                if(sum>9*num)return"";
        while(sum>=9){
            n+='9';
            sum-=9;
        }
        if(sum!=0)
        n+=to_string(sum);
        while(n.size()<num){
             n+='0';
        }
        return n;
    }
};