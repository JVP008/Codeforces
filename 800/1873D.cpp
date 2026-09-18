#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;

    while(t--){
        int count=0;
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i = 0;
        int j = k-1;
        while(i<=n){
            if (s[i]!='B'){
                i+=1;
                j+=1;
            }
            else{
                count+=1;
                i=j+1;
                j = i+k-1;
            }
        }
        cout<<count<<"\n";
    }    
}
