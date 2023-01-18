class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int hi=nums.size()-1,lo=0,mid;
        while (lo<hi) {
            mid = (hi + lo) / 2;
            if (nums[mid] < target) {
                lo = mid + 1;
            }
            else {
                hi = mid;
            }
        }
        if(nums[hi]<target)
            return hi+1;
        else
            return hi;
    }
};