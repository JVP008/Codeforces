#include<bits/stdc++.h>
using namespace std;
int main(){
    using l = long ;
    ios::sync_with_stdio(0);
    cin.tie(0);
    l s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    set<int>unique ;
    unique.insert(s1);
    unique.insert(s2);
    unique.insert(s3);
    unique.insert(s4);

    cout<<(4-unique.size());

    return 0;
}
