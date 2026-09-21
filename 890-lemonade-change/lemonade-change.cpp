class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        int arr[2]={0};

        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
                arr[0]++;
            else if(bills[i]==10)
            {
                if(arr[0]<1)
                    return false;
                arr[0]--;
                arr[1]++;
            }
            else
            {
                if(arr[1]>0 && arr[0]>0)
                {
                    arr[1]--;
                    arr[0]--;
                }
                else if(arr[0]>2)
                {
                    arr[0]=arr[0]-3;
                }
                else
                    return false;

            }
        }

        return true;
        
    }
};