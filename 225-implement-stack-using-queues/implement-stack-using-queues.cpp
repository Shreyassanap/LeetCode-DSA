class MyStack {
public:
    queue<int> que;
    queue<int>temp;
    MyStack() {        
    }
    
    void push(int x) {

        while(!que.empty())
        {
            int val=que.front();
            que.pop();
            temp.push(val);
        }
        que.push(x);
        while(!temp.empty())
        {
            int val=temp.front();
            temp.pop();
            que.push(val);
        }
        
    }
    
    int pop() {
        int val=que.front();
        que.pop();
        return val;        
    }
    
    int top() {
        return que.front();        
    }
    
    bool empty() {
        return que.empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */