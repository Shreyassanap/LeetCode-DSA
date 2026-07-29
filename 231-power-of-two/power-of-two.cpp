class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n<=0 )
            return false;

        long sol=n&(n-1);

        if(sol==0)
            return true;
        return false;
        
    }
};