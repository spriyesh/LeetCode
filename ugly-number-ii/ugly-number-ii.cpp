class Solution {
public:
    int nthUglyNumber(int n) {
        int*dp=new int[n+1];
        int i2=1;
        int i3=1;
        int i5=1;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            int val2=dp[i2]*2;
            int val3=dp[i3]*3;
            int val5=dp[i5]*5;
            int minval=min(val2,min(val3,val5));
            dp[i]=minval;
            if(minval==val2){
                i2++;
            }
            
                if(minval==val3)
                {
                    i3++;
                }
            if(minval==val5)
            {
                i5++;
            }
        }
        
        return dp[n];
        
    }
};