#include<bits/stdc++.h>
using namespace std;
int main (){

    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        string s;
        cin>>s;
        string sorted (s);
        sort(sorted.begin(),sorted.end());
        if (sorted==s){
            cout<<0<<"\n";
        }
        else{
            int count = 0;
            string temp = s;
            while(temp!=sorted){
                for (char &ch: temp){
                    ch |= 1;
                }
                count+=1;
                
            }
            cout<<count<<"\n";
        }
    }
    return 0;
}
