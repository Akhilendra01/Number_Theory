#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define vi vector<ll>
#define pii pair<ll, ll>
#define vpii vector<pair<ll, ll>>
typedef unsigned long long int ull;
typedef long long ll;

ll modPower(ll a, ll n, ll m){
    ll res=1;
    while(n){
        if(n&1)res=(res*a)%m, n--;
        a=(a*a)%m, n>>=1;
    }
    return res%m;
}

bool isPrime(ll n, int iter=5){
    if(n<4)return n==2|| n==3;
    for(ll i=1;i<=iter;i++){
        ll a=2+rand()%(n-3), res=modPower(a, n-1, n);
        if(res!=1)return false;
    } 
    return true;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll p; cin>>p;
    cout<<isPrime(p);
    return 0;
}