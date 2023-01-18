class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int lo=0,hi=letters.size()-1,mid;
        if(letters[hi]<target)
            return letters[0];
        while(lo<hi){
            mid=(lo+hi)/2;
            if(letters[mid]<=target)
                lo=mid+1;
            else
                hi=mid-1;
        }
        if(letters[lo]<=target)
            return letters[(lo+1)%letters.size()];
        return letters[lo];
    }
};