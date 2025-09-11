class NumMatrix {
public:
    vector<vector<int>> preSum;
    NumMatrix(vector<vector<int>>& matrix) {
        if(matrix.empty() || matrix[0].empty()) return;

        int rows=matrix.size();
        int cols=matrix[0].size();

        preSum.resize(rows, vector<int>(cols, 0));

        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                preSum[r][c] = matrix[r][c] + (c > 0 ? preSum[r][c - 1] : 0);
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0; 
        for (int r = row1; r <= row2; ++r) {
            int rowSum = preSum[r][col2] - (col1 > 0 ? preSum[r][col1 - 1] : 0);
            sum += rowSum;
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */