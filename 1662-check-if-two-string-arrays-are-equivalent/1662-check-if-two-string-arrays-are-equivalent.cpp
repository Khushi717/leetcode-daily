class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n=word1.size();
        int nn=word2.size();
        string a="";
        for(int i=0;i<n;i++){
            a+=word1[i];
        }
        string aa="";
        for(int i=0;i<nn;i++){
            aa+=word2[i];
        }
        return a==aa;
    }
};