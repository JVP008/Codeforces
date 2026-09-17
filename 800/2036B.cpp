#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;
    while(T--){
        int n,k;
        cin>>n>>k; //1 3
        vector<int>arrn(k);
        vector<int>arrk(k);
        int total = 0;
        //n = number of shelfs
        //k = number of bottles
        for (int i = 0;i<k;i++){
            cin>>arrn[i];
            cin>>arrk[i];
        }
        if (k == 1){
            cout<<arrk[0]<<"\n";
        }
        else if (n>=k) {
            for (int i =0;i<k;i++){
                total += arrk[i];
            }
            cout<<total<<"\n";
        }
        else {
            map<int,int>frequency;
            for (int i = 0;i<k;i++){
                frequency [arrn[i]] += arrk[i];
            }
            vector<int> sums;
            for (auto [key,value] : frequency){
                sums.push_back(value);
            }
            sort(sums.rbegin(), sums.rend());
            for (int i = 0;i<n && i<(int)sums.size();i++){
                total += sums[i];
            }
            cout<<total<<"\n";
        }
    }
    return 0;
}
