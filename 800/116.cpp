#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int count = 0;
    int max = 0;
    for (int i = 0;i<n;i++){
        int a,b;
        cin>>a>>b;  
        count-=a;
        count += b;
        if (max<=count){
            max = count;
        }
    }
    cout<<max;
    return 0;
}