#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define vi vector<ll>
#define pii pair<ll, ll>
#define vpii vector<pair<ll, ll>>
typedef unsigned long long int ull;
typedef long long ll;

ll modExp(ll a, ll p, ll m){
    ll res=1;
    while(p){
        if(p&1)res=(res*a)%m, p--;
        a=(a*a)%m, p/=2;
    }
    return res;
}

ll moduloInv(ll a, ll m){
    return modExp(a, m-2, m);
}
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, m;
    cin>>a>>m;
    cout<<moduloInv(a,m);
    return 0;
}