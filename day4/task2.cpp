class Solution {
public:
    void rotate(vector<vector<int>>& v) {
        int i,j,m=v.size(), n=v[0].size(),temp;
        for(i=0;i<m;i++)
            for(j=0;j<n;j++){
                if(i<j){
                    temp=v[i][j];
                    v[i][j]=v[j][i];
                    v[j][i]=temp;
                }
            }
        for(i=0;i<m;i++){
            for(j=0;j<(int)(n/2);j++){
                temp=v[i][j];
                v[i][j]=v[i][n-j-1];
                v[i][n-j-1]=temp;
            }
        }
    }
};