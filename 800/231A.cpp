#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count = 0;
    cin>>n; 
    int p;
    int v;
    int t;

        for (int i = 0;i<n;i++){
            cin>>p;
            cin>>t;
            cin>>v;

            if (p+t+v>=2){
                count+=1;
            }
        }
    cout<<count<<endl;


}