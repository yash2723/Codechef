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
    string s;
    cin >> s;
    vll op(n) , clos(n);
    for(int i = 0 ; i < n ; i++)
    {
        if(s[i] == '(')
            op[i]++;
        if(i > 0)
            op[i] += op[i-1];
    }
    ll ans = n+1;
    for(int i = n-1 ; i >= 0 ; i--)
    {
        if(s[i] == ')')
            clos[i]++;
        if(i < n-1)
            clos[i] += clos[i+1];
        ans = min(ans , n-2*min(op[i] , clos[i]));
    }
    answer(ans);
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