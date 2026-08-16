class Solution {
public:
    string removeOuterParentheses(string s) {

        int i=0;
        string sol;
        stack<char>stk;
        while(i!=s.length())
        {
            stk.push(s[i++]);

            while(!stk.empty())
            {
                if(s[i]=='(')
                    stk.push('(');
                else
                    stk.pop();
                if(!stk.empty())
                    sol=sol+s[i];
                i++;
            }
            
        }

        return sol;
        
    }
};