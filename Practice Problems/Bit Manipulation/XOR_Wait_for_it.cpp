#include <bits/stdc++.h>
using namespace std;

#define PI  3.141592653589793

#define FAST ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define vi vector <int>
#define vll vector < ll >
#define pb push_back
#define endl '\n'
#define max3(a,b,c) max(max(a,b),c)
#define min3(a,b,c) min(min(a,b),c)
#define answer(ans) cout << ans << '\n' 
#define ansyes cout << "YES\n" 
#define ansno cout << "NO\n" 
#define pii pair <int,int>

ll XOR_of_seq(ll n)
{
    if(n % 4 == 0)
        return n;
    else if(n % 4 == 1)
        return 1;
    else if(n % 4 == 2)
        return (n+1);
    else
        return 0;
}

void solve()
{
    ll l , r;
    cin >> l >> r;
    ll ans = XOR_of_seq(l-1) ^ XOR_of_seq(r);
    if(ans & 1)
        answer("ODD");
    else
        answer("EVEN");
}


int main()
{
    FAST;

    ll t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;

    return 0;
}