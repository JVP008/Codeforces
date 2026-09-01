#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    string temp = "";
    while(t--){
        int i=0;
        while(i<n){
            if (s[i]=='B' && s[i+1]=='G'){
                temp+='G';
                temp+='B';
                i+=1;
            }
            else{
                temp+=s[i];
            }
            i+=1;
        }
        s = temp; //no need to take another varible :)
        temp = ""; //reset the temp so that new string will not get appended to s variable again.
    }
    cout<<s;
    return 0;

}