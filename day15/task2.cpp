class Solution {
public:
    int mySqrt(long long x) {
        long long hi=x-1,lo=0,mid;
        while(lo<hi){
            mid=(lo+hi)/2;
            if(mid*mid<x){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        if(lo*lo>x)
            return lo-1;
        else if((lo+1)*(lo+1)==x)
            return lo+1;
        return lo;
    }
};