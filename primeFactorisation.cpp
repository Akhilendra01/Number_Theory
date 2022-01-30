#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
typedef long long ll;


vector<pair<ll, ll>> factors;
void primeFactor(ll n){
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            ll cnt=0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            factors.push_back({i, cnt});
        }
    }
    if(n>1)factors.push_back({n, 1});
}

int main(int argc, char const *argv[]){

    ll n; cin>>n;
    primeFactor(n);
    
    for (auto &i : factors)cout<<i.first<<"^"<<i.second<<endl;
    
    return 0;
}