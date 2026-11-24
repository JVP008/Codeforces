#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);

    //0->1->2->5->6 
    //o/p 3
    arr.push_back(0);
    for (int i = 0;i<n;i++){
        int o;
        cin>>o;
        arr.push_back(o);
    }
    arr.push_back(x);
    int maxx = INT_MIN;
    int size = arr.size();
    for (int i=1;i<size;i++){
        if (arr[i]==size - 1){
            maxx = max(maxx,2*(arr[i] - arr[i-1]));
        }
        else{
            maxx = max(arr[i]-arr[i-1],maxx);
        }
    }
    cout<<maxx<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--){
        solve();
    }
    return 0;
}
