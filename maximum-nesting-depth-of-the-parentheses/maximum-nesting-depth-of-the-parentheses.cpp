class Solution {
public:
    int maxDepth(string s) {
         stack<char>mstk;
        vector<int>myv;
        int count=0;
        int finans=0;
        for(int i=0;i<s.length();i++)
        {
            finans=max(count,finans);
            if(s[i]=='(')
            {
                mstk.push(s[i]);
                count++;
            }
            else
            if(s[i]==')'&&mstk.empty())
            {
                mstk.pop();
            }
            else if(s[i]==')')
            {
                mstk.pop();
                count--;
            }
        }
        return finans;
    }
};