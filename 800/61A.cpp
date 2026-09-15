#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string i,j;
    cin>>i>>j;
    int size = i.size();
    string result = "";
    for (int k = 0;k<size;k++){
        if (i[k] == j[k]){
            result+= "0";
        }
        else {
            result+="1";
        }
    }
    cout<<result<<"\n";
    return 0;
}
