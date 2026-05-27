class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> res;

        // Minimized DFS to only 6 parameters by using a Lambda function 
        // capture clause [&] automatically passes matrix and res implicitly!
        auto dfs = [&](auto& self, int steps, int next_steps, int r, int c, int dr, int dc) -> void {
            if (steps == 0 || next_steps == 0) return;

            for (int i = 0; i < steps; i++) {
                r += dr;
                c += dc;
                res.push_back(matrix[r][c]);
            }

            // Sub-problem: turn 90 deg (dc, -dr) and reduce remaining boundary
            self(self, next_steps, steps - 1, r, c, dc, -dr);
        };

        // Kick off the spiral: initially moving right means steps = n (columns)
        dfs(dfs, n, m - 1, 0, -1, 0, 1);
        
        return res;
    }
};