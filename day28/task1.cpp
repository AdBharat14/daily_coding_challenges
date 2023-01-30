class Solution {
public:
    int divisorSubstrings(int num, int k) {
        long long n=0,x=num,c=0,i;
        while(x>0){
            n++;
            x/=10;
        }
        for(i=0,x=0;i<k;i++){
            x=x*10+((int)(num/pow(10,n-i-1)))%10;
        }
        if(x!=0&&num%x==0){
            c++;
        }
        for(i=k;i<n;i++){
            x=x*10+((int)(num/pow(10,n-i-1)))%10;
            x=x-((int)(x/pow(10,k)))*pow(10,k);
            if(x!=0&&num%x==0){
                c++;
            }
        }
        return c;
    }
};