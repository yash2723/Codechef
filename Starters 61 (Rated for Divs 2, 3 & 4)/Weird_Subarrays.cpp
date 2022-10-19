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
    ll n;
    cin >> n;
    vll a(n);
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    vll ans;
    ans.pb(1);
    for(int i = 1 ; i < n-1 ; i++)
        if(a[i] > a[i-1] && a[i] > a[i+1])
            ans.pb(i+1);
    ans.pb(n);
    ll res = 0 , cnt;
    for(int i = 1 ; i < ans.size() ; i++) {
        cnt = ans[i] - ans[i-1] + 1;
        res += (cnt * (cnt+1))/2; 
    }
    res -= (ans.size()-2);
    answer(res);
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