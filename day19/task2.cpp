class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int c5=0,c10=0;
        for(auto &i: bills){
            if(i==5)
                c5++;
            else if(i==10){
                c10++;
                if(c5>0)
                    c5--;
                else
                    return false;
            }
            else{
                if(c10>0&&c5>0){
                    c10--;
                    c5--;
                }
                else if(c5>2)
                    c5-=3;
                else
                    return false;
            }
        }
        return true;
    }
};