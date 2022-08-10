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
    ll n , x;
    cin >> n >> x;
    vll v(n+1);
    for(int i = 1 ; i <= n ; i++)
        cin >> v[i];
    int ans[n+1][2];
    for(int i = 2 ; i <= n ; i++) {
        ans[i][0]=max(ans[i-1][0]+(v[i-1]^v[i]),ans[i-1][1]+((v[i-1]+x)^v[i]));
        ans[i][1]=max(ans[i-1][0]+(v[i-1]^(v[i]+x)),ans[i-1][1]+((v[i-1]+x)^(v[i]+x)));
    }
    answer(max(ans[n][0] , ans[n][1]));
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