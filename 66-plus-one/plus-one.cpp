class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        if(digits[digits.size()-1]<9){
            digits[digits.size()-1]=digits[digits.size()-1]+1;
            return digits;
        }

        int n=digits.size()-1;
        digits[digits.size()-1]=0;

        n--;

        int temp=1;
        while(n>=0)
        {
            temp=digits[n]+1;
            if(temp>9)
            {
                digits[n]=0;
            }
            else{
                digits[n]=temp;
                temp=0;
                break;
            }
            n--;

        }

        if(temp!=0)
            digits.insert(digits.begin(),1);

        return digits;

            
        
    }
};