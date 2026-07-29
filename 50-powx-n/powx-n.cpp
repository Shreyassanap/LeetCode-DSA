class Solution {
public:
    double myPow(double x, int n) {

        double sol=1;
        double a=x;
        int sign=1;
        long m=n;

        if(m<0)
        {
            m=-1*m;
            sign=-1;
        }

        
        while(m)
        {
            int num=m&1;
            m=m>>1;

            if(num==1)
                sol=sol*a;
            
            a=a*a;           
        }

        if(sign==-1)
            return 1/sol;
        
        return sol;
        
    }
};