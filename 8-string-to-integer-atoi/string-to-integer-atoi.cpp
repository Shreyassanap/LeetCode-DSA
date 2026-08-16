class Solution {
public:
    int myAtoi(string s) {
        long i=0;
        while(i!=s.length() && s[i]==' ' )
            i++;
        
        long sign=1;
        if(i < s.length() && (s[i] == '-' || s[i] == '+'))
        {
            if(s[i] == '-')
            sign = -1;
            i++;
        }
        
        while(s.length()!=i && s[i]=='0')
            i++;
        long long sol=0;
        while(i!=s.length())
        {
            if(s[i]>='0'&& s[i]<='9')
            {
                long temp=s[i]-48;
                sol=(10*sol);
                sol=sol+temp;

                if(sol*sign>=INT_MAX)
                    return INT_MAX;
                if(sol*sign<=INT_MIN)
                    return INT_MIN;
        
            }
            else 
                break;

            i++;

        }
        
        sol= sol*sign;

        
        return sol;
        
        
    }
};