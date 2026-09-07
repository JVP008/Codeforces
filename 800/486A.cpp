#include<bits/stdc++.h>
using namespace std;
typedef long long l;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    l n ;
    cin>>n;
    if (n%2==0){
        cout<<n/2;
    }
    else{
        n +=1;
        cout<<- (n/2);
    }
    return 0;
}