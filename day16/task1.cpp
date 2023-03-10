/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long hi=n, lo=1, mid=1,x;
        while(lo<hi){
            mid=(lo+hi)/2;
            x=guess(mid);
            if(x==0)
                return mid;
            else if(x==-1)
                hi=mid-1;
            else
                lo=mid+1;
        }
        if(guess(mid)==0)
            return mid;
        else if(guess(mid)==1)
            return mid+1;
        else
            return mid-1;
    }
};