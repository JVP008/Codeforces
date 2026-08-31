#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n ;
    cin.ignore();
    while(n--){
        
        string str; 
        getline(cin,str);
        int size = str.size();
        if (size>10){
            cout<< str[0]+to_string(size-2)+str[-1];
        }
        else{
            cout<<str;
        }
    }
    return 0;
}