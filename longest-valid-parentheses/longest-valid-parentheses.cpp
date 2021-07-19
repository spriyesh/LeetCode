class Solution {
public:
    int longestValidParentheses(string s) {
        
        stack<int>mstk;
        mstk.push(-1);
        int maxval=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                mstk.push(i);
            }
            else
                if(s[i]==')')
                {
                    mstk.pop();
                    if(mstk.empty())
                    {
                        mstk.push(i);
                    }
                    else
                    {
                        int len=i-mstk.top();
                        maxval=max(maxval,len);
                    }
                }
        }
        return maxval;
        
    }
};