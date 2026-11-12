#include<bits/stdc++.h>
using namespace std;

void solve(){
     int a,b,c;
     cin>>a>>b>>c;
     int maxx = max(max(a,b),c);
     int minn1 = min(min(a,b),c);
     int minn2 = (a+b+c)-minn1-maxx;

     if (maxx-minn1 == 2 && maxx - minn2 == 1 ){
        cout<<"YES\n";
     }
     else{
        cout<<"NO\n";
     }
     
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
