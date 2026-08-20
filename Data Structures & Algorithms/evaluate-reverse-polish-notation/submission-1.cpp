class Solution 
{
public:
    int evalRPN(vector<string>& tokens) 
    {
        std::stack<int> st{};
        int total{};
        for(string i : tokens)
        {
            if(i == "+")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(a+b);
                
            }
            else if(i == "-")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b-a);
            }
            else if(i == "/")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b/a);
            }
            else if(i == "*")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(a*b);
            }
            else
            {
                st.push(std::stoi(i));
            }
        }
    return st.top();
    }
};
