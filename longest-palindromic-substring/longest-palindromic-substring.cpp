class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        bool**dp=new bool*[n];
        for(int i=0;i<n;i++)
        {
            dp[i]=new bool[n];
            for(int j=0;j<n;j++)
            {
                dp[i][j]=false;
            }
        }
        int maxlen=INT_MIN;
        int start=-1;
        for(int g=0;g<n;g++)
        {
            for(int i=0,j=g;j<n;j++,i++)
            {
                if(g==0)
                {
                    dp[i][j]=true;
                }
                else
                    if(g==1)
                    {
                        if(s[i]==s[j])
                        {
                            dp[i][j]=true;
                        }
                        else
                        {
                            dp[i][j]=false;
                        }
                    }
                else
                {
                    if(s[i]==s[j]&&dp[i+1][j-1]==true)
                    {
                        dp[i][j]=true;
                    }
                    else
                    {
                        dp[i][j]=false;
                    }
                }
                if(dp[i][j]==true)
                {
                    maxlen=g+1;
                    start=i;
                }
            }
        }
        string st="";
        for(int i=start;i<=maxlen+start-1;i++)
        {
            st+=s[i];
        }
        return st;
        
    }
};