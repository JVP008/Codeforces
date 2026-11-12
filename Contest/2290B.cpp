#include<bits/stdc++.h>
using namespace std;

void solve(){
     int n;
     cin>>n;
     string s;
     cin>>s;
     int count = 0;
    //  string temp = "";
     //check the first letter;
     if (s[0]=='B'){
        count+=1;
     }
     for (int i = 1;i<n;i++){
        if (s[i-1]==s[i]){
            count+=1;
        }
     }
     cout<<count<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--){
        solve();
    }
    return 0;
}
