int sum(char a, char b, char &carry)
{
    int num1 = a - '0';
    int num2 = b - '0';
    int num3 = carry - '0';

    int total = num1 + num2 + num3;

    int sol = total % 2;
    int car = total / 2;

    carry = car + '0';        
    return sol + '0';        
}

class Solution {
public:
    string addBinary(string a, string b) {

        int len1 = a.length() - 1;
        int len2 = b.length() - 1;
        char carry = '0';
        string s;

        while (len1 >= 0 && len2 >= 0)
        {
            char ans = sum(a[len1--], b[len2--], carry);
            s.push_back(ans);                    
        }

        while (len1 >= 0)
        {
            char ans = sum(a[len1--], '0', carry);
            s.push_back(ans);
        }

        while (len2 >= 0)
        {
            char ans = sum('0', b[len2--], carry);
            s.push_back(ans);
        }

        if (carry == '1')                        
            s.push_back('1');

        reverse(s.begin(), s.end());              

        return s;
    }
};
