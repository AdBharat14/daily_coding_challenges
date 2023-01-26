class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.length()<3)
            return 0;
        int i=0,count=0;
        char a=s[0],b=s[1],c=s[2];
        if(!(a==b||b==c||c==a))
                count++;
        for(i=0;i<s.length()-3;i++){
            a=b;
            b=c;
            c=s[i+3];
            if(!(a==b||b==c||c==a))
                count++;
        }
        return count;
    }
};