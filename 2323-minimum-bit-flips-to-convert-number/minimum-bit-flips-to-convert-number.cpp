class Solution {
public:
    int minBitFlips(int start, int goal) {
        int sol=start^goal;
        int count=0;
        while(sol)
        {
            sol=sol&(sol-1);
            count++;
        }
    
        return count;
    }
};