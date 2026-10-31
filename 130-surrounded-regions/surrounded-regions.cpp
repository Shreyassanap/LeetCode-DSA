class Solution {

void bfs(vector<vector<char>>&board,int i,int j)
{
    queue<pair<int,int>>q;
    board[i][j]='1';
    pair<int,int>p={i,j};
    q.push(p);

    while(!q.empty())
    {
        pair<int,int>temp=q.front();
        int n=temp.first;
        int m=temp.second;
        q.pop();

        if(n-1>=0 && board[n-1][m]=='O')
        {
            board[n-1][m]='1';
            pair<int,int>a={n-1,m};
            q.push(a);
        }

        if(m+1<board[0].size() && board[n][m+1]=='O')
        {
            board[n][m+1]='1';
            pair<int,int>b={n,m+1};
            q.push(b);
        }

        if(n+1<board.size() && board[n+1][m]=='O')
        {
            board[n+1][m]='1';
            pair<int,int>c={n+1,m};
            q.push(c);
        }

        if(m-1>=0 && board[n][m-1]=='O')
        {
            board[n][m-1]='1';
            pair<int,int>d={n,m-1};
            q.push(d);
        }
    }




}

public:
    void solve(vector<vector<char>>& board) {
        

        int n=board.size();
        int m=board[0].size();

        for(int j=0;j<m;j++)
        {
            if(board[0][j]=='O')
                bfs(board,0,j);
            
            if(board[n-1][j]=='O')
                bfs(board,n-1,j);
        }

        for(int i=0;i<n;i++)
        {
            if(board[i][0]=='O')
                bfs(board,i,0);

            if(board[i][m-1]=='O')
                bfs(board,i,m-1);
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='O')
                    board[i][j]='X';
                else if(board[i][j]=='1')
                    board[i][j]='O';           
            }
        }

    }
};