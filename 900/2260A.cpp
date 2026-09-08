#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int count0 = 0;
        for(int i =0;i<n;i++){
            cin>>arr[i];
            if (arr[i]==0){
                count0+=1;
            }
        }
        if (count0<2){
            cout<<-1<<"\n";
        }
        else if (n==2 && arr[0]==0 && arr[n-1]==0){
            cout<<0<<"\n";
        }
        else if(arr[0]==0 && arr[n-1]==0){
            cout<<0<<"\n";
        }
        else if ((arr[0]==1 && arr[n-1]==1) && count0>1){
            cout<<2<<"\n";
        }
        else{
            cout<<1<<"\n";
        }

    }
    return 0;
}