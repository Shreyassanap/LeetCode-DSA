class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        int top=0;
        int bottom=n-1;
        int left=0;
        int right=n-1;

        vector<vector<int>>sol(n,vector<int>(n,0));
        int a=1;
        while(left<=right && top<=bottom)
        {
            for(int i=left;i<=right;i++)
            {
                sol[top][i]=a++;
            }
            top++;

            for(int i=top;i<=bottom;i++)
            {
                sol[i][right]=a++;
            }
            right--;

            for(int i=right;i>=left;i--)
            {
                sol[bottom][i]=a++;
            }
            bottom--;

            for(int i=bottom;i>=top;i--)
            {
                sol[i][left]=a++;
            }
            left++;

        }

        return sol;
        
    }
};