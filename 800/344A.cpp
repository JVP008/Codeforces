#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int arr[n];
    double total = 0;
    for (int i =0;i<n;i++){
        cin>>arr[i];
        total+=arr[i];
    }
    cout<<setprecision(9)<<(float)(total/n) ;
    return 0;
}