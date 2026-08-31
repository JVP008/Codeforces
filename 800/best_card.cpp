#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        int count = 0;

        for (int i = 2; i+1<= n+1; i++) {
            if ((n + 1) % i == 0) {
                cout<<"NO\n";
                count = 1;
                break;
            }
        }
    if (count==0){
        cout<< "Yes\n";
    }
        
    }
    return 0;
}