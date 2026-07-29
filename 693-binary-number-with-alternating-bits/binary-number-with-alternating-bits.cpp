class Solution {
public:
    bool hasAlternatingBits(int n) {

        int i=1;
        while(n>(pow(2,i)))
            i++;
        
        int flag=n&1;
        n=n>>1;
        for(int j=1;j<i;j++)
        {
            int sol=n&1;
            n = n >> 1;
            if(sol==flag)
                return false;
            flag=sol;
        }

        return true;
        
    }
};