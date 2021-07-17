class Solution {
public:
    int countPrimes(int n) {
        bool*sieve=new bool[n];
        for(int i=0;i<n;i++)
        {
            sieve[i]=true;
        }
        for(long long i=2;i<n;i++)
        {
            for(long long j=i*i;j<n;j+=i)
            {
                sieve[j]=false;
            }
        }
        int primes=0;
        for(long long i=2;i<n;i++)
        {
            if(sieve[i]==true)
            {
                primes++;
            }
        }
        return primes;
    }
};