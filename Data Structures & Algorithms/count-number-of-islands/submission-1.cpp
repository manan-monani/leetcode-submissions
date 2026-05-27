class Solution {
public:
    void dfs(vector<vector<char>>& char , int r, int c,int rows , int cols){
        //  base case for the recursion . checking that there is water or not 
        if(r<0 ||c<0 ||r>=rows ||c>=cols ||grid[r][c] == '0') return ;

        //  now we have to mark the current island as the visited or kind of sinked in the water so we not visit that thing repeatedly .
        grid[r][c] = '0';

        // we have to recursively explore all the 4 directions
        //  and here we are not calculating the area so we dont have to increase the counter or return anything .

        dfs(grid, r-1,c);
        dfs(grid, r+1,c);
        dfs(grid, r,c-1);
        dfs(grid, r,c+1);
    }


    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty) return 0;

        int rows=grid.size();
        int cols = grid[0].size();
        int num_islands=0;

        for(int i= 0 ; i<rows;++r){
            for(int j=0;j<cols;++j){
                if(grid[i][j] == '1');
                num_island++;
                dfs(grid , i , j , rows , cols);
            }
        }
        return num_islands;

    }
};
