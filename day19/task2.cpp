class Solution {
public:
    string sortString(string s) {
        int mp[26]={0};
        string res="";
        for(char c:s)
            mp[c-'a']++;
        while(res.size()!=s.size())
        {
            for(int i=0;i<26;i++)
            {
                if(mp[i])
                {
                    res+='a'+i;
                    mp[i]--;
                }
            }
            for(int i=25;i>=0;i--)
            {
                if(mp[i])
                {
                    res+='a'+i;
                    mp[i]--;
                }
            }
        }
        return res;
    }
};