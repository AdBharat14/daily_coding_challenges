#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,n,i,q,l,m;
    cin>>t;
    while(t--){
        cin>>n>>q;
        int *a = new int[n];
        int *f = new int[n];
        int *b = new int[n];
        cin>>a[0];
        f[0]=a[0];
        for(i=1;i<n;i++){
            cin>>a[i];
            f[i]=__gcd(f[i-1],a[i]);
        }
        b[n-1]=a[n-1];
        for(i=n-2;i>=0;i--)
            b[i]=__gcd(b[i+1],a[i]);
        for(i=0;i<q;i++){
            cin>>l>>m;
            
            if(l==1)
                cout<<b[m]<<endl;
            else if(m==n)
                cout<<f[l-2]<<endl;
            else
                cout<<__gcd(f[l-2],b[m])<<endl;
        }
    }
	return 0;
}
