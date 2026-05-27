class Solution {
public:
    vector<vector<int>> grid;
    vector<vector<int>> visited;

    int dfs(vector<int>& grid, int r, int c){
    int rows=grid.size();
    int cols=grid[0].size();
    //  firstly we check the base case condition always remember this thing for every recursive function .
    // 1.
    if(r<0||r>=rows ||c<0 ||c>=cols || grid[r][c] == 0 ) return 0;

    // 2.
    // mark the current land as visited and then perform the dfs in all the direction.

    grid[r][c] = 0;
    
    return 1+ dfs(r-1,c)+ dfs(r+1,c)+ dfs(r,c-1)+ dfs(r,c+1) ; 
    }



    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(!grid) return 0;
        
        int rows=grid.size();
        int cols=grid[0].size();
        int maxarea=0;

        for(int r=0;r<rows;++r){
            for(int c=0;c<cols;++c){
                if(grid[r][c] == 1) {
                    maxarea = max (maxarea,dfs(grid,r,c));

                }
            }
        }
        return maxarea;
    }
};
