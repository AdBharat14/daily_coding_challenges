class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i=0,c=0,min;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W')
                c++;
        }
        min=c;
        for(i=0;i<blocks.length()-k;i++){
            if(blocks[i]=='W')
                c--;
            if(blocks[k+i]=='W')
                c++;
            if(min>c)
                min=c;
        }
        return min;
    }
};