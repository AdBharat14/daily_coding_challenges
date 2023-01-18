//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int max;
        if(a.size()==2){
            max=a[0]>a[1]?a[0]:a[1];
            return max;
        }
        int hi=a.size()-1,lo=0,mid;
        while(lo<=hi){
            mid=(hi+lo)/2;
            if(a[mid]>a[mid+1]&&a[mid]>a[mid-1]){
                return a[mid];
            }
            else if(a[mid]>a[mid+1]&&a[mid]<a[mid-1])
                hi=mid-1;
            else
                lo=mid+1;
        }
        return a[mid];
    }
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}


// } Driver Code Ends