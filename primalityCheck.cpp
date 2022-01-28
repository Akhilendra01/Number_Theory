#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
typedef long long ll;

bool isPrime(ll n){
    for(ll i=2;i<=sqrt(n); i++){
        if(n%i==0)return false;
    }
    return true;
}

int main(int argc, char const *argv[]){

    ll n; cin>>n;
    cout<<isPrime(n);

    return 0;
}