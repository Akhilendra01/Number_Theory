#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define vi vector<ll>
#define pii pair<ll, ll>
#define vpii vector<pair<ll, ll>>
typedef unsigned long long int ull;
typedef long long ll;

/////////////////////////////////////
ll modExp(ll a, ll p, ll m){
    int res=1;
    while(p){
        if(p&1)res=(res*a)%m, p--;
        a=(a*a)%m, p/=2;
    }
    return res;
}

ll moduloInv(ll a, ll m){
    return modExp(a, m-2, m);
}

ll F[1000001];
ll nCk(ll n, ll k){
    if(k>n)return 0;

    F[0]=F[1]=1;
    for(int i=2;i<=1000000;i++){
        F[i]=(F[i-1]*i)%mod;
    }
    int res=F[n];
    res=(res*moduloInv(F[k], mod))%mod;
    res=(res*moduloInv(F[n-k], mod))%mod;
    return res;
}
////////////////////////////////////////////
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k, q;
    cin>>q;
    while(q--){
        cin>>n>>k;
        cout<<nCk(n, k)<<endl;
    }

    return 0;
}