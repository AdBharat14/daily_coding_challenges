//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    int ans=0,k=1;
    while(n>0){
        if(n%10==0)
            ans=ans+(5)*k;
        else
            ans=ans+(n%10)*k;
        k*=10;
        n=n/10;
    }
    return ans;
}