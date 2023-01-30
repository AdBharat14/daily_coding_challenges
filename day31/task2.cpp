class NumArray {
public:
    vector<int> v;
    NumArray(vector<int>& nums) {
        int s=0;
        for(auto i: nums){
            s+=i;
            v.push_back(s);
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0)
            return v[right];
        return v[right]-v[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */