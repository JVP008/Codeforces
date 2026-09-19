#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    long long size = s.size();
    if (s[size-1]=='e'){
        s += "r";
    }
    else{
        s+= "er";
    }
    cout<<s;
    return 0;
}
