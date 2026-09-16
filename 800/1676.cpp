#include<bits/stdc++.h>
using namespace std;
int main (){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int size = s.size();
        vector<int>left ;
        vector<int>right ;
        int totall =0;
        int totalr =0;
        for (int i =0;i<3;i++){
            int t = s[i]-'0';
            totall+=t;
        }
        int half = size/2;
        for (int i =3;i<6;i++){
            int t = s[i]-'0';
            totalr+=t;
        }
        if (totall==totalr){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
