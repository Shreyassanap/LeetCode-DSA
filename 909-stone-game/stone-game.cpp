class Solution {
public:
    bool stoneGame(vector<int>& piles) {

        int one=0,two=0;
        int i=0,j=piles.size()-1;
        while(i<=j)
        {
            if(piles[i]>piles[j])
            {
                one=one+piles[i];
                i++;

                two=two+piles[j];
                j--;
            }
            else
            {
                one=one+piles[j];
                j--;
                two=two+piles[i];
                i++;
            }

        }

        if(one>two)
            return true;
        return false;
        
    }
};