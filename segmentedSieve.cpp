#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define vi vector<ll>
#define pii pair<ll, ll>
#define vpii vector<pair<ll, ll>>
typedef unsigned long long int ull;
typedef long long ll;


#define N 1000000
bitset<N> isPrime;
void sieve(ll R){
    R=(ll)floor(sqrt(R));
    isPrime.set();
    isPrime[0]=0;isPrime[1]=0;isPrime[2]=1;
    for(ll i=2;i<=R;i++)if(isPrime[i]==1)for(ll j=i*i;j<=R;j+=i)isPrime[j]=0;          
}

bitset<N> primes;
void segmentedSieve(ll L, ll R){
    primes.set();
    sieve(R);
    
    for(ll i=2;i<sqrt(R);i++){
        if(isPrime[i]==1){
            ll j=L;
            while(j%i!=0&&j<=R)j++;
            for(;j<=R;j+=i)primes[j-L]=0;
        }
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll L, R;
    cin>>L>>R;
    segmentedSieve(L,R);
    for(ll i=L;i<=R;i++)if(primes[i-L]==1)cout<<i<<" ";
    
    return 0;
}