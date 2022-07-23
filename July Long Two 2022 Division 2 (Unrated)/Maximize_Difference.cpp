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


void solve()
{
    ll n , m;
    cin >> n >> m;
    map<ll,ll> v;
    ll maxi = 0;
    pair<ll,ll> ans;
    for(ll i = n ; i <= m ; i++)
    {
        v[i] = m - (m % i);
        maxi = max(maxi , abs(i-(m - (m % i))));
        if(maxi == abs(i-(m - (m % i))))
            ans = {i , (m - (m % i))};
    }
    cout << ans.first << " " << ans.second << endl; 
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