#include<bits/stdc++.h>
using namespace std;

int main(){

    long long N;
    cin>>N;
    int count = 0;
    while(N>0){
        long long remainder = N%10;
        if (remainder==7 || remainder==4){
            count+=1;   
        }
        
        N/=10;
    }
    if (count == 7 || count == 4){    
            cout<<"YES";
            return 0;
        }
    cout<<"NO";
    return 0;
}