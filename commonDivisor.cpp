#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define vi vector<ll>
#define pii pair<ll, ll>
#define vpii vector<pair<ll, ll>>
typedef long long ll;


#define N 1000000
ll ar[N+1];
void sieve(){
    for(ll i=0;i<=N;i++)ar[i]=i;
    for(ll i=2;i<=N;i++)if(ar[i]==i) for(ll j=i*i;j<=N;j+=i)ar[j]=i; 
}
ll GCD(ll a, ll b){
    while(b!=0){ll c=a; a=b; b=c%b;}
    return a;
}

ll Common_Divisors(ll n){
    sieve();
    unordered_map<ll, ll> divisors;
    while(n>1)divisors[ar[n]]+=1, n/=ar[n];
    ll common_divisors=1;
    for(auto &x : divisors)common_divisors*=(x.second+1);
    return common_divisors;
}
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin>>n>>k;
    ll gcd=n>k?GCD(n, k):GCD(k, n);
    cout<<Common_Divisors(gcd);

    return 0;
}