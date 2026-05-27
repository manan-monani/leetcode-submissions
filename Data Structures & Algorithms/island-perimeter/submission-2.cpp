class Solution {
public:

        vector<vector<int>> grid;
        vector<vector<int>> visited;
        int rows,cols;

        int dfs(int r , int c){
            if(r<0||r>=rows ||c<0 ||c>=cols ||grid[r][c] == 0) return 1;

            if(visited[r][c]) return 0;

            visited[r][c] = true;
            return dfs(i-1,j) + dfs(i+1,j) +dfs(i,j-1) +dfs(i,j+1) ; 
        }


    int islandPerimeter(vector<vector<int>>& grid) {
        this->grid=grid;

        rows = grid.size();
        cols = grid[0].size();
    
        visited = vector<vector<bool>>(rows, vector<bool>(cols, false));
        for(int i = 0;i<rows;++i){
            for(int j=0;j<cols;++j){
                if(grid[i][j] == 1){
                    return dfs(i,j);
                }
            }
        }
        return 0;
    }
};