class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {

        int colSize=mat[0].size();
        int rowSize=mat.size();


        vector<int> row(rowSize,0);
        vector<int> col(colSize,0);

        for(int i=0;i<rowSize;i++)
        {
            for(int j=0;j<colSize;j++)
            {
                if(mat[i][j]==1)
                {
                    row[i]++;
                    col[j]++;
                }
            }
        }

        int count=0;

        for(int i=0;i<colSize;i++)
        {
            if(col[i]==1)
            {
                for(int j=0;j<rowSize;j++)
                {
                    if(row[j]==1)
                    {
                        if(mat[j][i]==1)
                            count++;
                    }
                }
            }
        }

    return count;
        
    }
};