class Solution {
public:
    int numPrimeArrangements(int n) {
        bool prime[n + 1];
        memset(prime, true, sizeof(prime));
        long long c=0;
        for (int p = 2; p * p <= n; p++) {
            if (prime[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        for (int p = 2; p <= n; p++)
            if(prime[p])
                c++;
        long long fac=1;
        for(int i=1;i<=c;i++){
            fac=fac*i;
            fac=fac%1000000007;
        }
        for(int i=1;i<=n-c;i++){
            fac=fac*i;
            fac=fac%1000000007;
        }
        return fac;
    }
};