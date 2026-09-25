#include<bits/stdc++.h>
using namespace std;
int main (){

    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n;
        cin>>c;

        string s;
        cin>>s;

        int count = 0;

        int i = 0;
        int j = n-1;
        while(i<=j){
            if (s[i]==s[j]){
                i+=1;
                j-=1;
            }
            else{
                if (s[i]!=s[j] && s[i]!=c && s[j]!=c){
                    count+=2;
                }
                else if (s[i]!=c || s[j]!=c){
                    count+=1;
                }
                i+=1;
                j-=1;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
