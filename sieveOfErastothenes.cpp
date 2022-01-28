#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
typedef long long ll;


void sieve(ll n, vector<bool> &isPrime){
    isPrime[0]=false; 
    isPrime[1]=false;
    for(ll i=2;i<=n;i++){
        if(isPrime[i]){
            for(ll j=i*i;j<=n;j+=i){
                isPrime[j]=false;
            }
        }
    }
}

int main(int argc, char const *argv[]){

    ll n; cin>>n;
    vector<bool> isPrime(n, true) ; 
    sieve(n, isPrime);
    return 0;
}
