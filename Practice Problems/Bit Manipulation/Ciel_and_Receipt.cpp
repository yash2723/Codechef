#include <bits/stdc++.h>
using namespace std;

#define PI  3.141592653589793

#define FAST ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
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

int lookup_table[256];

void init()
{
    lookup_table[0] = 0;
    for(int i = 1 ; i < 256 ; i++)
        lookup_table[i] = lookup_table[i >> 1] + (i & 1);
}

void solve()
{
    ll p;
    cin >> p;
    init();
    ll cnt = 0;
    cnt += (p / 2048);
    p %= 2048;
    for(int i = 0 ; i < 4 ; i++)
    {
        cnt += lookup_table[p & 255];
        p = p >> 8;
    }
    answer(cnt);
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