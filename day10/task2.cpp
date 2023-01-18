//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    {
        int c=0,i,j,n=s.length(),k;
        string str(n,'a');
        for(i=n-1,k=0;i>=0;i--){
            if(s[i]=='.'){
                for(j=1;j<=c;j++)
                    str[k++]=s[i+j];
                str[k++]='.';
                c=0;
            }
            else{
                c++;
            }
        }
        if(c!=0){
            for(j=1;j<=c;j++)
                str[k++]=s[i+j];
        }
        return str;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends