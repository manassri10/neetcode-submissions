#include<stack>
class MinStack {
public:
    stack<long long> st;
    long long min;
    MinStack() {
    }
    
    void push(int val) {
        if(st.empty())
        {
            st.push(val);
            min = val;
        }
        else
        {
            if(val < min)
            {
                st.push(2LL * val - min);
                min = val;
            }
            else
            {
                st.push(val);
            }
        }
    }
    
    void pop() {
         if(st.top() > min)
         {
            st.pop();
         }
         else
         {
           min = 2LL * min  -  st.top();
           st.pop();
         }
    }
    
    int top() {
        if(st.top() < min)
        {
            return min;
        }
        return st.top();
    }
    
    int getMin() {
        return min;
    }
};
