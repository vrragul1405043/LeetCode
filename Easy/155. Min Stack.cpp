class MinStack {
    private:
    stack<int> main_stack;
    stack<int> min_stack;
    
    public:
    void push(int x) {
        main_stack.push(x);
        if(min_stack.empty() || x<=min_stack.top())
            min_stack.push(x);
    }
    
    void pop() {
        if(main_stack.top()==getMin())
            min_stack.pop();
        main_stack.pop();
    }
    
    int top() {
        return main_stack.top();
    }
    
    int getMin() {
        return min_stack.top();
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