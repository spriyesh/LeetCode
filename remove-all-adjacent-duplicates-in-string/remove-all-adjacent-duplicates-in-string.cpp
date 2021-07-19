class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char>mstk;
        mstk.push('#');
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==mstk.top()&&mstk.size()>0)
            {
                mstk.pop();
            }
            else if(s[i]!=mstk.top()||mstk.empty())
            {
                mstk.push(s[i]);
            }
        }
        string temp="";
        cout<<mstk.size();
       while(mstk.size()>1)
       {
           temp+=mstk.top();
           mstk.pop();
       }
       reverse(temp.begin(),temp.end());
        return temp;
        
    }
};