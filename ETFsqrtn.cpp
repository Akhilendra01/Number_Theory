#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define vi vector<ll>
#define pii pair<ll, ll>
#define vpii vector<pair<ll, ll>>
typedef unsigned long long int ull;
typedef long long ll;

ll ETF(ll n){
    ll res= n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            res/=i;
            res*=(i-1);
            while(n%i==0)n/=i;
        }
    }
    if(n>1)res/=n, res*=n-1;
    return res;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin>>n;
    cout<<ETF(n);

    return 0;
}