class Solution {
public:
    
    int helper(vector<int>&coins,int amount,int s,int e,int**dp)
    {
        
        if(s>e)
        {
            if(amount==0)
            {
                return 0;
            }
            else
            {
                return INT_MAX-1;
            }
        }
        if(amount<0)
        {
            return INT_MAX-1;
        }
        if(amount==0)
        {
            return 0;
        }
        
        if(dp[s][amount]!=-1)
        {
            return dp[s][amount];
        }
        
        int finans=0;
        if(coins[s]>amount)
        {
            finans=helper(coins,amount,s+1,e,dp);
        }
        else
        {
            int inc=1+helper(coins,amount-coins[s],s,e,dp);
            int exc=helper(coins,amount,s+1,e,dp);
            finans=min(inc,exc);
        }
        return dp[s][amount]=finans;
    }
    
    
    
    
    
    
    int coinChange(vector<int>& coins, int amount) {
        int**dp=new int*[coins.size()+1];
        for(int i=0;i<=coins.size();i++)
        {
            dp[i]=new int[amount+1];
            for(int j=0;j<=amount;j++)
            {
                dp[i][j]=-1;    
            }
        }
        int help=helper(coins,amount,0,coins.size()-1,dp);
        if(help==INT_MAX-1)
        {
            return -1;    
        }
        return help;
    }
};