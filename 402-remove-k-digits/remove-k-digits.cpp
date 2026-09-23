class Solution {
public:
    string removeKdigits(string num, int k) {

        if(k >= num.size())
            return "0";

        stack<char> stk;
        int i = 0;

        while(i < num.size())
        {
            if(stk.empty())
                stk.push(num[i++]);

            else if(k > 0 && stk.top() > num[i])
            {
                stk.pop();
                k--;
            }
            else
            {
                stk.push(num[i++]);
            }
        }

        while(k > 0)
        {
            stk.pop();
            k--;
        }

        string sol;

        while(!stk.empty())
        {
            sol.insert(sol.begin(), stk.top());
            stk.pop();
        }

        i = 0;

        while(i < sol.size() - 1 && sol[i] == '0')
            i++;

        return sol.substr(i);
    }
};