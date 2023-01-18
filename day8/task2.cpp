//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int a[], int n){
	    int lo=0,hi=n-1,mid;
	    while(lo<=hi){
	        mid=(lo+hi)/2;
	        if(mid%2==1){
	            if(a[mid]==a[mid-1])
	                lo=mid+1;
	            else if(a[mid]==a[mid+1])
	                hi=mid-1;
	            else
	                return a[mid];
	        }
	        else{
	            if(a[mid]==a[mid-1])
	                hi=mid-1;
	            else if(a[mid]==a[mid+1])
	                lo=mid+1;
	            else
	                return a[mid];
	        }
	    }
	    
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends