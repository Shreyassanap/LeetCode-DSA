class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        if(matrix.size()==0)
            return;
        
        reverse(matrix.begin(), matrix.end());

        for(int i = 0; i < matrix.size(); i++) {
            for(int j = i; j < matrix.size(); j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
       
    }
};
