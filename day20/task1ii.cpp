#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    bool prime[n+1];
    vector<int> v;
    memset(prime, true, sizeof(prime));
    int count=0;
    for(int i=2;i*i<=n;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=n;j+=i)
                prime[j]=false;
        }
    }
    for(int i=2;i<=n;i++)
        if(prime[i]==true)
            v.push_back(i);
    for(int i=0;i<v.size()-1;i++){
        if(v[i]+v[i+1]+1<=n){
            if(prime[v[i]+v[i+1]+1]==true)
                count++;
        }
    }
    if(count>=t)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}