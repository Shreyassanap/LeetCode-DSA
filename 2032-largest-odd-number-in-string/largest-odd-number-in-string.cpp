class Solution {
public:
    string largestOddNumber(string num) {

        int i=num.length()-1;

        while(i>=0)
        {
            int nums=num[i]-'0';
            if(nums%2==0)
                i--;
            else
            {
                return num.substr(0,i+1);
            }
        }

        return "";

    }
};