#include<bits/stdc++.h>
using namespace std;
int main(){
    const int size = 5;
    int c,t;
    int count=0;
    int matrix [size][size];
    for(int i = 0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>matrix[i][j];
        }
    }
    while(matrix[2][2]!=1){
        for (int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                if (matrix[i][j]==1){
                if (i<2){
                    count+=1;
                    matrix[i][j]=0;
                    matrix[i+1][j] = 1;
                }
                else if (j<2){
                    matrix[i][j]=0;
                    matrix[i][j+1]=1;
                    count+=1;
                }
                else if (j>2){
                    matrix[i][j]=0;
                    matrix[i][j-1]=1;
                    count+=1;
                }
                else if (i>2){
                    matrix[i][j]=0;
                    matrix[i-1][j]=1;
                    count+=1;
                }
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}

