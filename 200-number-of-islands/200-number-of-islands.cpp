class Solution {
public:
    
    int count=0;
    
    
    void dfs(vector<vector<char>>& grid, int i, int j)
    {
        int n = grid.size();
        int m= grid[0].size();
         if (i < 0 || i == n || j < 0 || j == m || grid[i][j] == '0') {
            return;
        }
                if(grid[i][j]=='0')return;

        if(grid[i][j]=='1')grid[i][j]='0';
        
        dfs(grid,i-1,j);
        dfs(grid,i+1,j);
        dfs(grid,i,j-1);
        dfs(grid,i,j+1);
        
        return;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        for(int x=0;x<n;x++)
        {
            for(int y=0;y<m;y++)
            {
                if(grid[x][y]=='1')
                {
                    dfs(grid,x,y);
                    count++;
                }
            }
        }
        
       return count;
    }
};