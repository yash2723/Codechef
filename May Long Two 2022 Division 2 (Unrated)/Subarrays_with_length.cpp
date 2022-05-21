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
    vll a(n+1);
    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];
    ll cnt = 0;
    set<vll> s;
    for(int i = 1 ; i <= n ; i++)
    {
        ll left = i - 1;
        ll right = n - i;
        if((left >= a[i]-1) && (right >= a[i]-1))
        {
            cnt += a[i];
            // cout << "Loop 1 : " << cnt << " ";
        }
        else if((left >= a[i]-1) || (right >= a[i]-1))
        {
            cnt += min(left,right)+1;
            // cout << "Loop 2 : " << cnt << " ";
        }
        else
        {
            if((left+right) >= a[i]-1)
                cnt += (left+right-a[i]+2);
            // cout << "Loop 3 : " << cnt << " ";
        }
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