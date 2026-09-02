#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    string str = "codeforces";
    while(t--){
        char c;
        cin>>c; //j
        auto it = find(str.begin(),str.end(),c);
        if (it!=str.end()){
            cout<<"YES \n";
        }
        else{
            cout<<"NO\n";
        }

    }
    return 0;
}