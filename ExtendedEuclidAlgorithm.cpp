#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define vi vector<ll>
#define pii pair<ll, ll>
#define vpii vector<pair<ll, ll>>
typedef unsigned long long int ull;
typedef long long ll;

ll gcd(ll a, ll b, ll& x, ll& y){
    if(b==0){
        x=1, y=0;
        return a;
    }
    ll x1, y1;
    ll d=gcd(b, a%b, x1, y1);
    x=y1;
    y=x1-(a/b)*y1;
    return d;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a, b; 
    cin >>a>>b;
    if(a>b){
        a^=b; 
        b^=a;
        a^=b;
    }
    ll x, y;
    ll d=gcd(a, b, x, y);
    cout<<d<<" "<<x<<" "<<y;

    return 0;
}