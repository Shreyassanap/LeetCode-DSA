class Solution {
public:
    int maxDepth(string s) {

        int count=0,sol=0;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                count++;
                if(count>sol)
                    sol=count;
            }

            if(s[i]==')')
                count--;
        }
        return sol;
    }
};