#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
int k,n,w;

//k - dollars he has to pay.
//w - no. of bananas he wants to buy
//n - he has N dollars.
cin>>k>>n>>w;
int total = 0;
for (int i= 1;i<=w;i++){
    total+=i*k;
}
if (total>n){
    cout<<total-n<<"\n";
}
else{
    cout<<0<<"\n";
}

return 0;
}