class Solution {
public:
    
    int helper(int n,int*dp)
    {
        if(n==1||n==2||n==3)
        {
            return n;
        }
        if(n<=0)return 0;
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        int finans=INT_MAX;
        for(int i=1;i<=sqrt(n);i++)
        {
            finans=min(finans,1+(helper(n-i*i,dp))%1000000007);
        }
        return dp[n]= finans;
    }
    
    
    
    
    
    
    int numSquares(int n) {
        
        
        int*dp=new int[n+1];
        for(int i=0;i<=n;i++)
        {
            dp[i]=-1;
        }
        int help=helper(n,dp);
        return help;
        
    }
};