#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    int count_l = 0;
    int count_u = 0 ;
    for (int i = 0;i<s.size();i++){
        if (isupper(s[i])){
            count_u+=1;
        }
        else{
            count_l+=1;
        }
    }
    string temp = "";
    if (count_u>count_l){

        for (int i =0;i<s.size();i++){
            temp+=toupper(s[i]);
        }
    }
    else{
        for (int i =0;i<s.size();i++){
            temp+=tolower(s[i]);
        }
    }
cout<<temp;
}