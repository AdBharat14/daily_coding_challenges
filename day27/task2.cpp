class Solution {
public:
    bool isvowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        char c;
        int i=0,j=s.length()-1;
        while(i<j){

            if(isvowel(s[i])&&isvowel(s[j])){
                c=s[i];
                s[i]=s[j];
                s[j]=c;
            }
            else if(isvowel(s[i]))
                i--;
            else if(isvowel(s[j]))
                j++;
            i++;
            j--;
        }
        return s;
    }
};