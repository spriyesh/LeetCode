class Solution {
public:
    bool isValid(string s) {
        
        stack<char>*mstk=new stack<char>();
        for(int i=0;i<s.length();i++)
        {
              if(s[i]=='('||s[i]=='['||s[i]=='{')
              {
                mstk->push(s[i]);  
              }
             
            else
                if((s[i]==')'&&mstk->empty())||(s[i]=='}'&&mstk->empty())||(s[i]==']'&&mstk->empty()))
                {
                    mstk->push(s[i]);
                }
             else
              {
                  if((s[i]==')'&&mstk->top()=='(')||(s[i]=='}'&&mstk->top()=='{')||(s[i]==']'&&mstk->top()=='['))
                     {
                         mstk->pop();
                     }
                     else
                     {
                         mstk->push(s[i]);
                     }
              }
        }
                     
                     return mstk->empty();
        
    }
};