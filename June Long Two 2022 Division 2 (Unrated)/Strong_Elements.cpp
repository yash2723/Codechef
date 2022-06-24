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
    vll suff(n) , pre(n);
    pre[0] = a[0];
    for(int i = 1 ; i < n ; i++)
        pre[i] = __gcd(pre[i-1],a[i]);
    suff[n-1] = a[n-1];
    for(int i = n-2 ; i >= 0 ; i--)
        pre[i] = __gcd(pre[i+1],a[i]);
    ll ans = pre[n-1];
    if(ans == 1)
    {
        ll cnt = 0 , temp;
        for(int j = 0 ; j < n ; j++)
        {
            if(j == 0)
                temp = suff[1];
            else if(j == n-1)
                temp = pre[n-2];
            else
                temp = __gcd(pre[j-1],suff[j+1]);
            
            if(temp > 1)
                cnt++;
        }
        answer(cnt);
    }
    else
        answer(n);
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