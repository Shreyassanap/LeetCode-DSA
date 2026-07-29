class Solution {
public:
    int countPrimes(int n) {

        vector<int> num(n,1);
        int sol=0;

        for(int i=2;i<=sqrt(n);i++)
        {
            int size=2;
            if(num[i]==1)
            {
                while(i*size<n )
                {
                    num[i*size]=0;
                    size++;
                }        

            }

        }

        for(int i=2;i<n;i++)
        {
            if(num[i]==1)
                sol++;
        }

        return sol;

        
        
    }
};