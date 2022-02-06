#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef unsigned long long int ll;

ll t[3][3], I[3][3];
void multiply(ll A[][3], ll B[][3]){
    ll res[3][3];
    for(int i=1;i<=2;i++){
        for(int j=1;j<=2;j++){
            res[i][j]=0;
            for(int k=1;k<=2;k++)res[i][j]+=A[i][k]*B[k][j];
        }
    }
    for(int i=1;i<=2;i++){
        for(int j=1;j<=2;j++)A[i][j]=res[i][j];
    }
}


void matExp(ll A[][3], ll n){
    for(int i=1;i<=2;i++){
        for(int j=1;j<=2;j++)I[i][j]=i==j?1:0;
    }

    while(n){
        if(n%2){
            multiply(I, A); n--;
        }
        multiply(A, A); n/=2;
    }
    for(int i=1;i<=2;i++){
        for(int j=1;j<=2;j++)A[i][j]=I[i][j];
    }
}

int main(int argc, char const *argv[]){

    ll tc; cin>>tc;
    while(tc--){
        ll n; cin>>n;
        t[1][1]=0; t[2][1]=t[2][2]=t[1][2]=1;

        matExp(t, n-1);
        cout<<t[1][2]<<endl;

    }
    return 0;
}