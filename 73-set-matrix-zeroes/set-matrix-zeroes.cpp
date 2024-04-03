class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int numOfRows = matrix.size();
        int numOfCol = matrix[0].size();
        vector<bool> row(numOfRows, false);
        vector<bool> col(numOfCol, false);

        for(int i = 0; i < numOfRows; i++){
            for (int j = 0; j < numOfCol; j++){
                if(matrix[i][j] == 0){
                    row[i] = true;
                    col[j] = true;
                }
            }
        }

        for(int i = 0; i < numOfRows; i++){
            for (int j = 0; j < numOfCol; j++){
                if(row[i] || col[j]){
                    matrix[i][j] = 0;
                }
            }
        }


    }
};