#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    if(n!=1){
        for(i=0;i<n;i++){
            cout<<"* ";
        }
        cout<<endl;
        for(i=1;i<n-1;i++){
            for(j=0;j<i;j++)
                cout<<" ";
            cout<<"*";
            for(j=1;j<2*(n-i-1);j++)
                cout<<" ";
            cout<<"*";
            cout<<endl;
        }
        for(j=0;j<n-1;j++)
            cout<<" ";
        cout<<"*";
    }
    return 0;
}