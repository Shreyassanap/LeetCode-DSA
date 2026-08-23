class Solution {
public:
    int minAddToMakeValid(string s) {

        stack<char>stk;

        int i=0;
        int count=0;
        while(i!=s.size())
        {
            if(s[i]=='(')
                stk.push('(');
            else
            {
                if(stk.empty())
                    count++;
                else
                    stk.pop();
            }
            i++;

        }

        while(!stk.empty()){
            stk.pop();
            count++;
        }

        return count;
        
    }
};