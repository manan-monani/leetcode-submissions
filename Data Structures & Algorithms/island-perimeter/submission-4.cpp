class Solution {
public:

        vector<vector<int>> grid;
        // ERROR: You declared this as int, but initialize it as bool later. 
        // Update this to vector<vector<bool>> visited;
        vector<vector<int>> visited; 
        int rows,cols;

        int dfs(int r , int c){
            if(r<0||r>=rows ||c<0 ||c>=cols ||grid[r][c] == 0) return 1;

            if(visited[r][c]) return 0;

            visited[r][c] = true;
            
            // ERROR: 'i' and 'j' are undefined here. 
            // Update 'i' to 'r' and 'j' to 'c' so it matches your function parameters.
            return dfs(r-1,c) +dfs(r+1,c) +dfs(r,c-1) +dfs(r,c+1) ;
        }


    int islandPerimeter(vector<vector<int>>& grid) {
        this->grid=grid;

        rows = grid.size();
        cols = grid[0].size();

        // This initialization is fine, but only if you change the declaration at the top to bool.
        visited = vector<vector<bool>>(rows, vector<bool>(cols, false));

            // ERROR: You are missing the outer loop for the rows here!
            // You need to add: 
             for(int i = 0; i < rows; ++i){
            for(int j=0;j<cols;++j){
                // ERROR: 'i' is completely undefined here because the row loop is missing.
                if(grid[i][j] == 1){
                    // ERROR: Same as above, 'i' is undefined.
                    return dfs(i,j);
                }
            }
            }
        // ERROR: There is an extra closing bracket '}' right here that will break compilation.
        } 
        return 0;
    }
};