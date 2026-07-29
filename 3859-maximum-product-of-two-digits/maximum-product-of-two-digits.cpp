class Solution {
public:
    int maxProduct(int n) {

        int first=0;
        int sec=0;

        while(n)
        {
            int num=n%10;
            if(num>first){
                sec=first;
                first=num;
            }

            else if(num>sec)
                sec=num;
            
            n=n/10;
        }

        return first*sec;


        
    }
};