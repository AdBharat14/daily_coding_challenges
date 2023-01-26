class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long sum=0,max;
        int i,n=nums.size();
        for(i=0;i<k;i++){
            sum+=nums[i];
        }
        max=sum;
        for(i=0;i<n-k;i++){
            sum=sum-nums[i]+nums[i+k];
            if(sum>max){
                max=sum;
            }
        }
        return ((double)max)/((double)k);
    }
};