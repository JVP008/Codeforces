#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p[n];
    map<int,int>mapping;
    for (int i = 0;i<n;i++){
        cin>>p[i];
        mapping[p[i]]=i+1;
    }
    for (int i = 1;i<=n;i++){
        cout<<mapping[i]<<" ";
    }  
    return 0;
}