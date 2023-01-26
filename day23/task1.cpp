class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int i,j,l=0,r=matrix[0].size(),t=0,b=matrix.size(),flagl=1,flagr=1;
        int count=r*b;
        vector<int> v;
        while(count){
            i=t;
            for(j=l;j<r;j++){
                v.push_back(matrix[i][j]);
                count--;
            }
            if(count==0)
                break;
            j--;
            t++;
            for(i=t;i<b;i++){
                v.push_back(matrix[i][j]);
                count--;
            }
            if(count==0)
                break;
            i--;
            r--;
            for(j=r-1;j>=l;j--){
                v.push_back(matrix[i][j]);
                count--;
            }
            if(count==0)
                break;
            j++;
            b--;
            for(i=b-1;i>=t;i--){
                v.push_back(matrix[i][j]);
                count--;
            }
            i++;
            l++;
        }
        return v;
    }
};