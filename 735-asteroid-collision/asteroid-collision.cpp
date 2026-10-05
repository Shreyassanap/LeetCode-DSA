class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        vector<int>sol;

        if(asteroids.size()==0)
            return sol;
        
        stack<int>stk;
        int i=0;
        stk.push(asteroids[i++]);

        while(i!=asteroids.size())
        {
            if(stk.empty())
                stk.push(asteroids[i++]);
            
            if(i==asteroids.size())
                break;
            
            if(stk.top()>0 && asteroids[i]<0)
            {
                int num1=abs(stk.top());
                int num2=abs(asteroids[i]);
                if(num1>num2)
                    i++;
                else if(num1==num2)
                {
                    stk.pop();
                    i++;
                }
                else
                    stk.pop();
            }
            else
                stk.push(asteroids[i++]);
        }

        while(!stk.empty())
        {
            sol.insert(sol.begin(),stk.top());
            stk.pop();
        }

        return sol;
        



    }
};