#include<bits/stdc++.h>
using namespace std;
int main (){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[3];
        for (int &i : arr ){
            cin>>i;            
        }
        int min = arr[0];
        for (int i = 0;i<3;i++){
            if (min>arr[i]){
                min = arr[i];
            }
        }
        
        cout<<(n-min)<<"\n";
    }
    return 0;
}
