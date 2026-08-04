class Solution {
public:
    string removeStars(string s) {

        stack<char> stk;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='*')
                stk.pop();
            
            else
                stk.push(s[i]);
        }
        string sol;
        if(stk.empty())
            return sol;
        int i=0;
        while(!stk.empty())
        {
            char a=stk.top();
            sol.insert(sol.begin()+i,a);
            i++;
            stk.pop();
        }

        reverse(sol.begin(),sol.end());

        return sol;


        
        
    }
};