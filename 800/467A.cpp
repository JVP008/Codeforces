#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int p;
    int q;
    int count=0;
    for (int i=0;i<n;i++){
        cin>>p>>q;
        if (p+1<q){ //two people
            count+=1;
        }
    }
    cout<<count;
    return 0;
}