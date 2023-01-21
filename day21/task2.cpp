class Solution {
public:
    vector<int> countBits(int n) {
        if(n==0)
            return {0};
        vector<int> v;
        v.push_back(0);
        v.push_back(1);
        for(int i=2,j=0,k=1;i<=n;i++,j++){
            if(j==pow(2,k)){
                k++;
                j=0;
            }
            v.push_back(v[j]+1);
        }
        return v;
    }
};