#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
typedef long long ll;

ll n=1000000;
int ar[1000001];
void sieve(){
    for(ll i=1;i<=n;i++)ar[i]=-1;

    for(ll i=2;i<=n;i++){
        if(ar[i]==-1){
            
            for(ll j=i*i;j<=n;j+=i){
                if(ar[j]==-1)ar[j]=i;
            }
        }
    }
}


int main(int argc, char const *argv[]){

    ll n; cin>>n;
    sieve();
    while(n>0){
        ll x=ar[n]!=-1?ar[n]:n;
        cout<<x<<" ";
        n/=ar[n];
    }

    return 0;
}
