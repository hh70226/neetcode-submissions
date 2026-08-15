class MinStack {
public:
    stack<int> min, st;
    
    MinStack() {

    }
    
    void push(int val) {
        st.push(val);
        
        if(min.empty()){
            min.push(val);
        }

        else if(val <= min.top()){
            min.push(val);
        }
    }
    
    void pop() {
        
        if(!st.empty() && min.top() == st.top()){
             min.pop();
        }
        if(!st.empty()) st.pop();
        

    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
       return min.top();
    }
};
