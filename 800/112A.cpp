#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    string a,b;
    cin>>a>>b;
    string e1="";
    string e2="";
 
    for (size_t i = 0;i<a.size();i++){
        // a[i] == A 
        if (int(a[i])>90){
            e1+= char(int(a[i])-32);
        }
        else{
            e1+= int(a[i]);
        }
    }
    for (size_t i=0;i<a.size();i++){
        
        if (int(b[i])>90){
            e2+= char(int(b[i])-32);
        }
        else{
            e2+= int(b[i]);
        }

    }
    
    if (e1<e2){
        cout<<-1<<"\n";
    }
    else if (e1>e2){
        cout<<1<<"\n";
    }
    else{
        cout<<0<<"\n";
    }
    return 0;
}