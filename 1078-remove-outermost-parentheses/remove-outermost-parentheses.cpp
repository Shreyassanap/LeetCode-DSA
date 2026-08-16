class Solution {
public:
    string removeOuterParentheses(string s) {

        int i=0;
        string sol;
        int count=0;
        while(i!=s.length())
        {
            count++;
            i++;

            while(count)
            {
                if(s[i]=='(')
                    count++;
                else
                    count--;
                if(count)
                    sol=sol+s[i];
                i++;
            }
            
        }

        return sol;
        
    }
};