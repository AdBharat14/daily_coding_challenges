// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(long long n) {
        long long hi=n,lo=1,mid;
        while(lo<hi){
            mid=(hi+lo)/2;
            if(isBadVersion(mid)==true){
                hi=mid-1;
            }
            else
                lo=mid+1;
        }
        if(isBadVersion(lo))
            return lo;
        else
            return lo+1;
    }
};