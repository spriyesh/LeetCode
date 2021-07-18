class Solution {
public:
    
    
    int helper(int n,int *arr)
    {
        if(n==1||n==2)
        {
            return n;
        }
        
        if(n<=0)
        {
            return 0;
        }
        if(arr[n]!=-1)
        {
            return arr[n];
        }
        int ways=helper(n-1,arr)+helper(n-2,arr);
        return arr[n]=ways;
    }
    
    
    
    
    int climbStairs(int n) {
        int *arr=new int[n+1];
        for(int i=0;i<=n;i++)
        {
            arr[i]=-1;
        }
        int help=helper(n,arr);
        return help;
        
    }
};