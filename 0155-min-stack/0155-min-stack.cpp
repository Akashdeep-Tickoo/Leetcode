#include<bits/stdc++.h>
using namespace std;
long long mini;
class MinStack {
    stack<long long> s;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        long long value=val;
        if(s.size()==0)
        {
            mini=value;
            s.push(value);
        }
        else{
            if(value<mini)
            {
                s.push(2*value*1LL-mini);
                mini=value;
            }
            else
            {
                s.push(value);
            }
        }
    }
    
    void pop() {
        if(s.empty())
        {
            return;
        }
        long long el=s.top();
        s.pop();
        if(el<mini)
        {
            mini=2*mini-el;
        }
    }
    
    int top() {
        if(s.empty())return -1;
        long long el=s.top();
        if(el<mini)return mini;
        return el;

    }
    
    int getMin() {
        return mini;
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