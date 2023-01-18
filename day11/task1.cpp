class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        stack<int> s;
        int n=arr.size();
        while(!arr.empty()){
            s.push(arr.back());
            arr.pop_back();
        }
        while(n--){
            if(s.top()!=0)
                arr.push_back(s.top());
            else{
                arr.push_back(0);
                if(n--)
                    arr.push_back(0);
                else
                    break;
            }
                s.pop();
        }
    }
};