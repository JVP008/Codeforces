#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int counta= 0;
    int countd= 0;
    for (int i =0;i<n;i++){
        if(s[i]=='A'){
            counta+=1;
        }
        else{
            countd+=1;
        }
    }
    if (counta==countd){
        cout<<"Friendship";
    }
    else if (counta>countd){
        cout<<"Anton";
    }
    else{
        cout<<"Danik";
    }
    return 0;
}