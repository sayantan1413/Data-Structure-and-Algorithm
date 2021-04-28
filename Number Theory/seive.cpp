#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define vi vector<int>
#define rep(i, a, b) for(int i=a; i<b; i++)
#define rrep(i, a, b) for(int i = b-1; i > a; i--)
#define se set<int>
#define mp unordered_map<int, int>
#define pb push_back
#define ll long long int

void seive(int n)
{
    vi Prime(n+1, 0);
    rep(i, 2, n+1)
    {
        if(Prime[i] == 0)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                 Prime[j] = 1;
            }
        }
    }
    rep(i, 2, n+1)
    {
        if(Prime[i] == 0)
        {
            cout << i << " ";
        }
    }
}

void solve()
{
    //Code
    int n;
    cin >> n;
    seive(n);
}
    
signed main(int argc, char const *argv[])
{
    fast_io;
    int tc;
    cin >> tc;
    for(int i = 1; i <= tc; i++)
    {
        solve();
    }
    return 0;
}