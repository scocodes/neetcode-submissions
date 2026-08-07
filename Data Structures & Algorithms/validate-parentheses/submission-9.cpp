class Solution {
public:
    bool isValid(string s) 
    {
        std::stack<char> st;

        for(char& i : s)
        {
            if(i == '(' || i == '{' || i == '[')
            {
                st.push(i);
            }
            else if(st.empty())
            {
                return false;
            }
            else if (i == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if (i == '}' && st.top() == '{')
            {
                st.pop();
            }
            else if (i == ']' && st.top() == '[')
            {           
                st.pop();
            }
            else
            {
                return false; 
            }
        }
        return st.empty();
    }
};
