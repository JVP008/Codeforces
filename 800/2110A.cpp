#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;

        int result = 0;
        int count = 0;

        vector<int>a;
        for (int i=0;i<n;i+=1){
            int temp = 0;
            cin >> temp;
            a.push_back(temp);
        }
        while (a.size() > 1){
           int min_val = *min_element(a.begin(), a.end());
           int max_val = *max_element(a.begin(), a.end());
           if ((min_val + max_val) % 2 == 0) {
               break;
           } else {
                count += 1;
                auto it = find(a.begin(), a.end(), min_val);
                if (it != a.end()) {
                    a.erase(it);
                }
           }
       }
        cout <<count<<endl;
    }
    return 0;
}