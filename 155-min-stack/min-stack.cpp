class MinStack {
public:
    stack<int> stk;
    stack<int> min;
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        if(!min.empty())
        {
            if(min.top()>=val)
                min.push(val);
        }
        else
            min.push(val);
        
    }
    
    void pop() {
        int num;
        if(!stk.empty()){
            num=stk.top();
            stk.pop();            
        }

        if(!min.empty() && num==min.top())
            min.pop();        
    }
    
    int top() {
        return stk.top();
        
    }
    
    int getMin() {
        return min.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */