class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)
            return 0;
        bool prime[n];
        memset(prime, true, sizeof(prime));
        int count=0;
        for(int i=2;i*i<n;i++){
            if(prime[i]==true){
                for(int j=i*i;j<n;j+=i)
                    prime[j]=false;
            }
        }
        for(int i=2;i<n;i++)
            if(prime[i]==true)
                count++;
        return count;
    }
};