#include <stack>
using namespace std;

class MyQueue {
public:
    
    stack<int> stk;
    stack<int> temp;

    MyQueue() {
        
    }
    
    void push(int x) {
        
        while(!stk.empty())
        {
            int val = stk.top();
            temp.push(val);
            stk.pop();
        }

        stk.push(x);

        while(!temp.empty())
        {
            int val = temp.top();
            stk.push(val);
            temp.pop();
        }
    }
    
    int pop() {
        int val = stk.top();
        stk.pop();
        return val;
    }
    
    int peek() {
        return stk.top();
    }
    
    bool empty() {
        return stk.empty();
    }
};