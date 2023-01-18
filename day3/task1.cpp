class Solution {
public:
    vector<int> generateVector(int n){
        vector<int> v;
        int cur=1;
        for(int i=0;i<=n;i++){
            if(i==0||i==n){
                v.push_back(1);
            }
            else {
                cur=cur*(n-i+1)/i;
                v.push_back(cur);
            }
        }
        return v;
    }
    vector<vector<int>> generate(int numRows) {
        int i;
        vector<vector<int>> v;
        for(i=0;i<numRows;i++){
            v.push_back(generateVector(i));
        }
        return v;
    }
};