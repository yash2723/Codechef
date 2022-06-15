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

ll gcd(ll a , ll b)
{
    if(a == 0)
        return b;
    return gcd(b % a , a);
}

ll lcm(ll a , ll b)
{
    return ((a*b)/gcd(a,b));
}

void solve()
{
    ll n;
    cin >> n;
    ll cnt = 0;
    int count=0;
    for(int i = 1 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            if(n / i == i)
                cnt++;
            else
                cnt += 2;
        }
    }
    cnt--;
    cnt *= 2;
    if(!(n & 1))
        cnt--;
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