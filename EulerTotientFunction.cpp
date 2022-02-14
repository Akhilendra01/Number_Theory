#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define vi vector<ll>
#define pii pair<ll, ll>
#define vpii vector<pair<ll, ll>>
typedef unsigned long long int ull;
typedef long long ll;

const ll n=1000000;
int phi[n+1];
void sieve(){
    for(int i=1;i<=n;i++)phi[i]=i;
    for(ll i=2;i<=n;i++)if(phi[i]==i)for(ll j=i;j<=n;j+=i)phi[j]*=i-1, phi[j]/=i;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();

    ll x;cin>>x;
    cout<<phi[x];
    return 0;
}