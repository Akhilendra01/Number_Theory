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
ll phi[n+1];

void sieve(){
    for(int i=1;i<=n;i++)phi[i]=i;
    for(int i=2;i<=n;i++)if(phi[i]==i)for(int j=i;j<=n;j+=i)phi[j]*=i-1, phi[j]/=i; 
}

ll GCDsum(ll x){
    ll res=0;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            ll d1=i, d2=x/i;
            res+=d1*phi[x/d1];
            if(d1!=d2)res+=d2*phi[x/d2];
        }
    }
    return res;
}
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    ll x; cin>>x;
    cout<<GCDsum(x)<<endl;

    return 0;
}