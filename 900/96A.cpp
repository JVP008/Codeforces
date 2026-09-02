#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int count=0;
    size_t size = s.length();
    int i =0;
    while (i<size-1){
        if (s[i]==s[i+1]){
            count+=1;
        }
        else{
            count=0;
        }   
        if (count>=6){
            cout<<"YES\n";
            return 0;
        }
        i++;
    }
    cout<<"NO\n";

    return 0;
}