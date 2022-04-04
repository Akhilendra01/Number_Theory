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

 bool solutions(ll a, ll b, ll c){
    ll x0, y0;
    ll d=gcd(a, b, x0, y0);
    cout<<d<<endl;
    if(c%d){
        cout<<"No Solution"<<endl;// no solution if c is not divisible by gcd(a, b)
        return false;
    }
    ll x=x0*c/d, y=y0*c/d;//soltions of ax+by=c
    ll t=0;//factor
    ll X=x0+t*b/d, Y=y0-t*a/d;//general solutions
    cout<<"x="<<x<<"\ty="<<y<<endl;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a, b, c; 
    cin>>a>>b>>c; 
    solutions(a, b, c);

    return 0;
}