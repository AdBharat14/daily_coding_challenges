//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    int sumOfAll(int l, int r){
        int *a = new int[10001],i=0,sum;
        a[0]=0;
        a[1]=0;
        for(i=2;i<10001;i++){
            a[i]=i;
        }
        for(i=2;i<10001;i++){
            if(a[i]==i){
                for(int k=i;k<10001;k+=i){
                    if(a[k]==k)
                        a[k]=i;
                    else
                        a[k]+=i;
                }
            }
        }
        for(i=l;i<=r;i++){
            sum+=a[i];
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin>>l>>r;
        Solution ob;
        cout<<ob.sumOfAll(l,r)<<endl;
    }
    return 0;
}

// } Driver Code Ends