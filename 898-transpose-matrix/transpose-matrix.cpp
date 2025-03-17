class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();       // Number of rows in the original matrix
        int n = matrix[0].size();   // Number of columns in the original matrix
        
        // Initialize the result matrix with dimensions n x m
        vector<vector<int>> result(n, vector<int>(m));
        
        // Perform the transpose operation
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result[j][i] = matrix[i][j];  // Swap rows and columns
            }
        }
        
        return result;
    }
};