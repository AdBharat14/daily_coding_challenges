class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> v(128,-1);
        int c=0;
        for(int i=0;i<s.length();i++){
            if(v[(int)s[i]]==-1){
                v[(int)s[i]]=(int)t[i];
                c++;
            }
            else{
                if(v[(int)s[i]]!=(int)t[i])
                    return false;
            }
        }
        unordered_set<int> set;
        for(auto &i: v){
            if(i!=-1)
               set.insert(i);
        }
        if(set.size()!=c){
            return false;
        }
        else
            return true;
    }
};