#include<bits/stdc++.h>
using namespace std;

//1+2+4+3+2 -> 1+2+2+3+4
int main(){
    string s;
    cin>>s;
    vector<string>v;
    istringstream iss(s);
    string result ="";
    size_t i=0;
    
    int temp;
    while(iss>>temp){
        v.emplace_back(to_string(temp));
    }
    sort(v.begin(),v.end());
    
    while (true)
    {
        result+=v[i];
        if (i==v.size()-1){
            break;
        }
        result+="+";
        i+=1;
    }
    
    cout<<result<<"\n";

    return 0;
}