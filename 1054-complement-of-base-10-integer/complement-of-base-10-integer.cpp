class Solution {
public:
    int bitwiseComplement(int n) {
        int sol=0;
        int i=0;

    if(n==0)
        return 1;
    
    while(n)
    {
        int val=pow(2,i);
        i++;

        int bit=n&1;
        n=n>>1;

        if(bit==0)
            bit=1;
        else
            bit=0;
        
        val=val*bit;

        sol=sol+val;

    }
        return sol;
    }
};