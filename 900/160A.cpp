#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int total = 0;
    int temp_sum = 0;
    int no_of_coins = 0;
    vector<int>v(n);
    for (int i =0;i<n;i++){
        cin>>v[i];
        total += v[i];
    }
    sort(v.rbegin(),v.rend());
    int i=0;
    int half = total/2+1;
    while(temp_sum<half){
        temp_sum+=v[i];
        no_of_coins+=1;
        i+=1;
    }
    cout<<no_of_coins<<"\n";

    return 0;
}