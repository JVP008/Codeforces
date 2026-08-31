#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int arr[n];
int zero = 0;
int count = 0;
for (int i = 0;i<n;i++){
cin>>arr[i];
}
int threshold = arr[k-1];
for (int i=0;i<n;i++){
if (arr[i] > 0 && arr[i] >= threshold){
count+=1;
}
}
cout<<count;

return 0;
}