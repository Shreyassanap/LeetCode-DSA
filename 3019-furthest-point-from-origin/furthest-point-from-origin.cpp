class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int i=0,count=0,sol=0;
        while(i!=moves.size())
        {
            if(moves[i]=='_')
                count++;
            else if(moves[i]=='L')
                sol=sol-1;
            else
                sol++;
            i++;
        }

        return abs(sol)+count;
        
    }
};