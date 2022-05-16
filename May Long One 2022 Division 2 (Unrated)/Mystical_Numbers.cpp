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


void solve()
{
    ll n;
    cin >> n;
    vll a(n);
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    ll q;
    cin >> q;
    while(q--)
    {
        ll l , r , x;
        cin >> l >> r >> x;
        l--; r--;
        ll cnt = 0;
        for(int i = l ; i <= r ; i++)
        {
            // cout << " " << (a[i]^x) << " " << (a[i]&x) << endl;
            if((a[i]^x) > (a[i]&x))
                cnt++;
        }
        answer(cnt);
    }
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