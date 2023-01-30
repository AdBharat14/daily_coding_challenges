class Solution {
public:
    string reverseWords(string s) {
        int sp=-1,end,beg;
        char temp;
        for(int i=0;i<s.length()+1;i++){
            if(i==s.length()||s[i]==' '){
                beg=sp+1;
                sp=i;
                end=sp-1;
                while(beg<end){
                    temp = s[beg];
                    s[beg] = s[end];
                    s[end] = temp;
                    beg++,end--;
                }
            }
        }
        return s;
    }
};