#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
typedef long long ll;

ll modularExponentiation(ll base, ll power, ll p){
    ll res=1;
    while(power){
        if(power&1){
            res=(res*base)%p;
            power --;
        }
        base=(base*base)%p;
        power>>=1;
    }
    return res;
}

int main(int argc, char const *argv[]){

    ll x, y, p; cin>>x>>y>>p;
    cout<<modularExponentiation(x, y, p);
    return 0;
}
