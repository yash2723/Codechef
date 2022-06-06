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

ll gcd(ll a , ll b)
{
    if(a == 0)
        return b;
    return gcd(b % a , a);
}

ll lcm(ll a , ll b)
{
    return ((a * b)/gcd(a , b));
}

void solve()
{
    ll n;
    cin >> n;
    ll ans1 = lcm(n-1 , 1) - gcd(n-1 , 1);
    ll ans2 = lcm(n-2 , 2) - gcd(n-2 , 2);
    ll ans3 = lcm(n-3 , 3) - gcd(n-3 , 3);
    ll ans = max3(ans1 , ans2 , ans3);
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