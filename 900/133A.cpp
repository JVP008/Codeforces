#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;

    for (int i = 0;i<s.size();i++){
        if (int(s[i])>=33 && int(s[i])<=126)
        if (s[i]=='H'||s[i]=='Q'||
        s[i]=='9'||s[i]=='+'){
        if (s[i]!='+'){
            cout<<"YES\n";
            return 0;
        }
    }
    }
    // for (int i =0;i<s.size();i++){
    //     cout<<int(s[i])<<" ";
    // }
    cout<<"NO\n";

    return 0;
}
