class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0,c;
        unordered_set<int> s1,s2;
        vector<int> a;
        for(i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
        for(i=0;i<nums2.size();i++)
            s2.insert(nums2[i]);
        for(auto x: s2){
            if(s1.find(x)!=s1.end())
                a.push_back(x);
        }
        return a;
    }
};