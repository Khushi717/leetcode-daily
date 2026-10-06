class Solution {
public:
    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        int ant=0;
        while(i<j){
            if(s[i]!=s[j]){
                ant++;
                int l=i;
                int r=j-1;
                bool another=false;
                while(l<r){
                    if(s[l]!=s[r]){
                        another=true;
                        break;
                    }
                    l++;
                    r--;
                }
                if(!another){
                    return true;
                }
                int ll=i+1;
                int rr=j;
                if(another){
                    while(ll<rr){
                        if(s[ll]!=s[rr]){
                            return false;
                        }
                        ll++;
                        rr--;
                    }return true;
                }
            }
            i++;
            j--;
        }
        return true;
    }
};