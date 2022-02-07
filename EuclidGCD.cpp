#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef unsigned long long int lli;
typedef long long ll;

int main(int argc, char const *argv[]){

    ll a, b, t;
    cin>>a>>b;
    if(b>a){
        a=a^b;
        b=a^b;
        a=a^b;
    }
    while(b!=0){
        t=a%b;
        a=b;
        b=t;
    }
    cout<<a<<endl;
    return 0;
}