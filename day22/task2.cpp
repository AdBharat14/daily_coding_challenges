class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        int c=0;
        for(auto &i: nums){
            s.insert(i);
            c++;
            if(s.size()!=c){
                return true;
            }
        }
        return false;
    }
};