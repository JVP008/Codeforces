#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    string s;
    cin>>s;
    string t;
    cin>>t;
    for (int i = 0;i<n;i++){
        if (s[i]!='*' && t[i]!='*'){
            if (s[i]!=t[i]){
                cout<<"No";
                return 0;
            }
        }
    }
    cout<<"Yes";
    
    return 0;
}
