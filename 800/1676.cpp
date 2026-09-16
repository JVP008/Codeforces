#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B;
    cin>>A>>B;
    int count = 0;
    if ((A+B)%2==1){
        cout<<-1;
    }
    else{
        while(A!=B && A>B){
        A-=B;
        count+=1;
    }
    cout<<count<<"\n";
    }
    return 0;
}
