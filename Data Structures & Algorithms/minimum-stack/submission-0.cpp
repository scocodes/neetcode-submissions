class MinStack 
{
private:
    std::stack<int> stackOne;
    std::stack<int> minStack;  
public:
    MinStack() 
    {      
    }

    void push(int val) 
    {
        stackOne.push(val);
        if(minStack.empty())
        {
            minStack.push(val);
        }
        else
        {
            minStack.push(std::min(val, minStack.top()));
        }
    }
    
    void pop() 
    {
        stackOne.pop();
        minStack.pop();
    }
    
    int top() 
    {
        return stackOne.top();
    }
    
    int getMin() 
    {
        return minStack.top();
    }
};
