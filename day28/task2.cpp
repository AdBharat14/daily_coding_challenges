class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]+=1;
        }
        for(auto &i: mp){
            if(i.second==1){
                sum+=i.first;
            }
        }
        return sum;
    }
};