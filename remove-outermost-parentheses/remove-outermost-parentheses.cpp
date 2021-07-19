class Solution {
public:
    string removeOuterParentheses(string s) {
        string temp="";
        stack<char>mstk;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                if(!mstk.empty())
                {
                    temp+='(';
                }
                mstk.push(s[i]);
            }
            else if(s[i]==')')
            {
                mstk.pop();
                if(!mstk.empty())
                {
                    temp+=')';
                }
            }
            
        }
        return temp;
    }
};