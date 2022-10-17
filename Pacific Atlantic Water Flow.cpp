class Solution {
public:
    
    // DFS Function implementation
    void dfs_fun(vector<vector<int>> &heights,int i,int j,int prev,vector<vector<int>> &oce){
        if(i<0 || i>=oce.size() || j<0 || j>=oce[0].size()){
            return;
        }
        if(heights[i][j]<prev || oce[i][j]==1){
            return;
        }
        
        oce[i][j]=1;
        
        dfs_fun(heights,i,j+1,heights[i][j],oce);
        dfs_fun(heights,i,j-1,heights[i][j],oce);
        dfs_fun(heights,i+1,j,heights[i][j],oce);
        dfs_fun(heights,i-1,j,heights[i][j],oce);
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        // no. of rows
        int m=heights.size();
        // no. of columns
        int n=heights[0].size();
        
        // 2-d vector for storing ans
        vector<vector<int>> ans;
        
        if(m==0 || n==0){
            return ans;
        }
        
      
        vector<vector<int>> pacific(m,vector<int> (n));
        vector<vector<int>> atlantic(m,vector<int> (n));
        
        
        // Depth First Traversal Call
        for(int j=0;j<n;j++){
            dfs_fun(heights,0,j,INT_MIN,pacific);
            dfs_fun(heights,m-1,j,INT_MIN,atlantic);
        }
        
        for(int j=0;j<m;j++){
            dfs_fun(heights,j,0,INT_MIN,pacific);
            dfs_fun(heights,j,n-1,INT_MIN,atlantic);
        }
        
        
       
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(pacific[i][j]==1 && atlantic[i][j]==1){
                    ans.push_back({i,j});
                }
            }
        }
        
        return ans;
        
    }
};
