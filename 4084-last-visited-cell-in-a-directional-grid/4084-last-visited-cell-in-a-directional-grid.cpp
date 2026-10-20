class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        set<pair<int,int>> st;
        int i=0;
        int j=0;
        while(!st.count({i,j})){
            if(j+1<n && grid[i][j]=='R'){
                if(st.count({i,j+1})){
                    return {i,j};
                }
                st.insert({i,j});
                j+=1;
            }
            else if(i+1<m && grid[i][j]=='D'){
                if(st.count({i+1,j})){
                    return {i,j};
                }
                st.insert({i,j});
                i+=1;
            }
            else if(i-1>=0 && grid[i][j]=='U'){
            if(st.count({i-1,j})){
                    return {i,j};
                }
                st.insert({i,j});
                i-=1;
            }
            else if(j-1>=0 &&grid[i][j]=='L'){
            if(st.count({i,j-1})){
                    return {i,j};
                }
                st.insert({i,j});
                j-=1;
            }
            else{
                return {i,j};
            }

        }
        return {i,j};
    }
};