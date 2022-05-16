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
    ll a , b;
    cin >> a >> b;
    if(a%2)
    {
        if(a+3 <= b)
        {
            if(a%3)
                cout << a+1 << " " << a+3 << endl;
            else
                cout << a << " " << a+3 << endl;
        }
        else
            answer(-1);
    }
    else
    {
        if((a+1 != b) && (__gcd(a,a+2) > 1))
            cout << a << " " << a+2 << endl;
        else
            answer(-1);
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