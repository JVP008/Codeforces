#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    vector<long long>odd;
    for (int i=1;i<=n;i++){
        if (i%2==1){
            odd.emplace_back(i);
        }
    }
    for (int i=1;i<=n;i++){
        if (i%2==0){
            odd.emplace_back(i);
        }
    }
    cout<<odd[k-1];

    return 0;
}