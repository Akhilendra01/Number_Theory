#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
typedef long long ll;

ll binaryExponentiation(ll base, ll power){
    ll res=1;
    while(power){
        if(power&1){
            res*=base;
            power --;
        }
        base*=base;
        power>>=1;
    }
    return res;
}

int main(int argc, char const *argv[]){

    ll x, y; cin>>x>>y;
    cout<<binaryExponentiation(x,y);
    return 0;
}
