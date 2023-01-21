class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0,j=s.length()-1;i<j;){
            char a=tolower(s[i]);
            char b=tolower(s[j]);
            if(isalnum(a)&&isalnum(b)){
                if(a!=b)
                    return false;
                i++;
                j--;
            }
            else if(isalnum(a))
                j--;
            else if(isalnum(b))
                i++;
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};