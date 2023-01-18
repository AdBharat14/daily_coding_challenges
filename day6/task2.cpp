//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        int i=0,j=0,k;
        vector<int> v;
        if(arr1[0]<arr2[0]){
            v.push_back(arr1[0]);
            i=1;
        }
        else{
            v.push_back(arr2[0]);
            j=1;
        }
        for(k=1,k;i<n&&j<m;){
            if(arr1[i]==v[k-1])
                i++;
            else if(arr2[j]==v[k-1])
                j++;
            else if(arr1[i]==arr2[j]){
                v.push_back(arr1[i]);
                j++;
                i++;
                k++;
            }
            else if(arr1[i]<arr2[j]){
                v.push_back(arr1[i]);
                i++;
                k++;
            }
            else{
                v.push_back(arr2[j]);
                j++;
                k++;
            }
        }
        if(arr1[n-1]>=arr2[m-1]){
            for(;i<n;i++){
                if(arr1[i]==v[k-1])
                    continue;
                else{
                    v.push_back(arr1[i]);
                    k++;
                }
            }
        }
        else{
            for(;j<m;j++){
                if(arr2[j]==v[k-1])
                    continue;
                else{
                    v.push_back(arr2[j]);
                    k++;
                }
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends