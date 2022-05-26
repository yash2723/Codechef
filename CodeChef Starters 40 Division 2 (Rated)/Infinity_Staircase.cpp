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
    n--;
    ll cnt = 0;
    while(n)
    {
        if(n >= 5)
        {
            cnt += (n / 5)*2;
            n %= 5;
        }
        else if(n >= 4)
        {
            cnt += (n / 4)*2;
            n %= 4;
        }
        else if(n >= 3)
        {
            cnt += (n / 3);
            n %= 3;
        }
        else if(n >= 2)
        {
            cnt += (n / 2);
            n %= 2;
        }
        else
        {
            cnt += (n);
            n %= 1;
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