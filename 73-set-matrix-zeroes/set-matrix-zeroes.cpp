class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n= matrix[0].size();

        //col[m] ={0} --> matrix[0][..]
        //row[n]={0} --> matrix[..][0]
        int col0=1;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    //mark the i-th row
                    matrix[i][0]=0;
                    //mark the j-th row
                    if( j != 0){
                        matrix[0][j]=0;
                    }
                    else{
                        col0=0;
                    }
                }
            }
        }
        //going across rest of the matrix
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(matrix[i][j] != 0){
                    //check row and column
                    if(matrix[i][0] ==0 || matrix[0][j] == 0){
                        matrix[i][j] =0;
                    }
                }
            }
        }
        //converting the first row accordingly
        if(matrix[0][0]==0){
            for(int j=0; j<n; j++){
                matrix[0][j]=0;
            }
        }
        //converting the first column accordingly
        if(col0==0){
            for(int i=0; i<m; i++){
                matrix[i][0]=0;
            }
        }
    }
};