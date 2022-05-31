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
    ll x , y;
    cin >> x >> y;
    ll cnt = 0;
    if(__gcd(x , y) > 1)
        answer(cnt);
    else
    {
        int _min = min(x , y) , _max = max(x , y);
        int ans1 = _max - _min , ans2;
        for(int i = 2 ; i*i <= _max ; i++)
        {
            if(_max % i == 0)
            {
                if(_min < i)
                {
                    ans2 = i - _min;
                    answer(min(ans1,ans2));
                    return;
                }
            }
        }
        answer(ans1);
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