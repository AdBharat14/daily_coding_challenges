class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int c=0,i=0,j=0;
        for(i=0;i<players.size()&&j<trainers.size();j++){
            if(players[i]<=trainers[j]){
                i++;
                c++;
            }
        }
        return c;
    }
};