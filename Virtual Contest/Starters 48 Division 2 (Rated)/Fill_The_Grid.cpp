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
    if(n < 2 || m < 2)
        answer(max(n,m));
    else
    {
        if((n % 2 == 0) && (m % 2 == 0))
            answer(0);
        else if((n % 2 == 0) && (m % 2 != 0))
            answer(n);
        else if((n % 2 != 0) && (m % 2 == 0))
            answer(m);
        else
            answer(n + m - 1);
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