class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {

        int num=tickets[k];
        int sum=0;
        for(int i=0;i<tickets.size();i++)
        {
            if(i<k)
            {
                if(num>tickets[i])
                    sum=sum+tickets[i];
                else
                    sum=sum+num;
            }
            else if(i>k)
            {
                if(num>tickets[i])
                    sum=sum+tickets[i];
                else
                    sum=sum+num-1;
            }
            else
                sum=sum+num;
        }

        return sum;
        
    }
};