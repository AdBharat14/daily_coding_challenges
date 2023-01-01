//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    int min=a[0], min2=INT_MAX,i;
    vector<int> v;
    if(n>1){
        for(i=1;i<n;i++){
            if(min==a[i])
                continue;
            else if(min<a[i]){
                min2=min;
                min=a[i];
            }
            else if(a[i]<min2)
                min=a[i];
        }
    }
    v.push_back(min);
    if(min2==INT_MAX)
        min2=-1;
    v.push_back(min2);
    return v;
}