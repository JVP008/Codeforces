#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s ;
    cin>>s;
    set<char> unique_set(s.begin(),s.end());

    if ((size(unique_set))%2==0){
        cout<<"CHAT WITH HER!"<<"\n";
    }
    else{
        cout<<"IGNORE HIM!"<<"\n";
    }

    return 0;
}