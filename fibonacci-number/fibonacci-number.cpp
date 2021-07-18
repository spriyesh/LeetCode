class Solution {
public:
    
    int helper(int n,int *dp)
    {
        if(n==0||n==1)
        {
            return n;
        }
        if(n<0)
        {
            return 0;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        return dp[n]=helper(n-1,dp)+helper(n-2,dp);
    }
    
    
    
    
    int fib(int n) {
        int*dp=new int[n+1];
        for(int i=0;i<=n;i++)
        {
            dp[i]=-1;
        }
        int help=helper(n,dp);
        return help;
    }
};