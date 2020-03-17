class MinStack {
public:
    /** initialize your data structure here. */
    stack <int> s;
    stack <int> minstack;
    MinStack() {
        
        minstack.push(2147483647);
    }
    
    void push(int x) {
        s.push(x);
        if(x < minstack.top())
        {
            minstack.push(x);
        }
        else 
        {
            minstack.push(minstack.top());
        }
    }
    
    void pop() {
        int x = s.top();
        s.pop();
        minstack.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
