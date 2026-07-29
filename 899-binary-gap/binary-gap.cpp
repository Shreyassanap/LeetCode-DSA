class Solution {
public:
    int binaryGap(int n) {

        int count=log2(n)+1;

        int pos1=-1,pos2,sol=0;

        for(int i=0;i<count;i++)
        {
            int num=n&1;
            n=n>>1;

            if(num==1)
            {
                pos2=pos1;
                pos1=i;

                if(pos2!=-1)
                {
                    int ans=pos1-pos2;

                    if(ans>sol)
                        sol=ans;
                }
            }
        }

        return sol;
        
    }
};