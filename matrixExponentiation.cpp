#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

#define N 101
ll ar[N][N], I[N][N];

void multiply(ll A[][N], ll B[][N], ll dim)
{
    ll res[dim+1][dim+1];

    for(ll i=1;i<=dim;i++)
    {
        for(ll j=1;j<=dim;j++)
        {
            res[i][j]=0;
            for(ll k=1;k<=dim;k++)res[i][j]+=A[i][k]*B[k][j];
        }
    }

    for(ll i=1;i<=dim;i++)
    {
        for(ll j=1;j<=dim;j++)
        {
            A[i][j]=res[i][j];
        }
    }
}

void power(ll A[][N], ll dim, ll power)
{
    for(ll i=1;i<=dim;i++){
        for(ll j=1;j<=dim;j++)
        {
            if(i-j==0)I[i][j]=1; 
            else I[i][j]=0;
        }
    }

    while(power)
    {
        if(power%2)
        {
            multiply(I, A, dim); 
            power--;
        }
        multiply(A, A, dim); power/=2;
    }

    for(ll i=1;i<=dim;i++)
    {
        for(ll j=1;j<=dim;j++)
        {
            A[i][j]=I[i][j];
        }
    }
}

int main(int argc, char const *argv[])
{
    ll dim, n;
    cin >> dim >> n;

    for (ll i = 1; i <= dim; i++)
    {
        for (ll j = 1; j <= dim; j++)
            cin >> ar[i][j];
    }
    cout<<endl;
    power(ar, dim, n);

    for (ll i = 1; i <= dim; i++)
    {
        for (ll j = 1; j <= dim; j++)
            cout << ar[i][j] << " ";
        cout << endl;
    }
    return 0;
}