class Solution {


public:
    int lastStoneWeight(vector<int>& stones) {

       priority_queue<int> q;

        for(int i=0;i<stones.size();i++)
            q.push(stones[i]);

        int a=0;
        
        while(!q.empty())
        {
            a=q.top();
            q.pop();

            if(q.empty())
                break;
            int b=q.top();
            if(b==0)
                return a;
            q.pop();
            b=a-b;
            q.push(b);


        }
        
        return a;        
    }
};