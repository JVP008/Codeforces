#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s ;
    cin>>s;
    string copy ="";
    size_t ascii = int(s[0]);
    if (ascii>96){
        copy+= char(ascii-32);
    }
    else{
        copy+=char(ascii);
    }
    for (size_t i=1;i<s.size();i++){
        copy+=s[i];
    }
    cout<<copy;
    return 0;
}