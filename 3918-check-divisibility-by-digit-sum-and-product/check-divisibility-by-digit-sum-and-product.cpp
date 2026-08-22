class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int num=n;
        int product=1;
        while(num)
        {
            int temp=num%10;
            sum=temp+sum;
            product=product*temp;
            num=num/10;
        }
        cout<<sum<<'\n';
        cout<<product;
        sum=sum+product;

        if(n%sum==0)
            return true;
        return false;


        
    }
};