class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int n=words.size(), i, j, m = s.length(),flag, c=0;
        for(i=0;i<n;i++){
            if(words[i].length()<=s.length()){
                flag=1;
                for(j=0;j<words[i].length();j++){
                    if(s[j]!=words[i][j]){
                        flag=0;
                        break;
                    }
                }
                if(flag)
                    c++;
            }
        }
        return c;
    }
};