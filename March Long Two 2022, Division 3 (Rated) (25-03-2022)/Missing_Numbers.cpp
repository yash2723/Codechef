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
    ll a , b , c , d;
    cin >> a >> b >> c >> d;

    ll a1 = (a+b)/2;
    if(a1 > 0)
    {
        ll b1;
        b1 = a - a1;
        if((b1 > 0) && (((a1 * b1 == c) && (a1 / b1 == d)) || ((a1 / b1 == c) && (a1 * b1 == d))))
        {
            if(a1 <= 10000 && b1 <= 10000)
            {
                cout << a1 << " " << b1 << endl;
                return;
            }
        }
        
        b1 = b - a1;
        if((b1 > 0) && (((a1 * b1 == c) && (a1 / b1 == d)) || ((a1 / b1 == c) && (a1 * b1 == d))))
        {
            if(a1 <= 10000 && b1 <= 10000)
            {
                cout << a1 << " " << b1 << endl;
                return;
            }
        }
    }


    ll a2 = (b+c)/2;
    if(a2 > 0)
    {
        ll b2;
        b2 = b - a2;
        if((b2 > 0) && (((a2 * b2 == a) && (a2 / b2 == d)) || ((a2 / b2 == a) && (a2 * b2 == d))))
        {
            if(a2 <= 10000 && b2 <= 10000)
            {
                cout << a2 << " " << b2 << endl;
                return;
            }
        }
        
        b2 = c - a2;
        if((b2 > 0) && (((a2 * b2 == a) && (a2 / b2 == d)) || ((a2 / b2 == a) && (a2 * b2 == d))))
        {
            if(a2 <= 10000 && b2 <= 10000)
            {
                cout << a2 << " " << b2 << endl;
                return;
            }
        }
    }

    ll a3 = (c+d)/2;
    if(a3 > 0)
    {
        ll b3;
        b3 = c - a3;
        if((b3 > 0) && (((a3 * b3 == a) && (a3 / b3 == b)) || ((a3 / b3 == a) && (a3 * b3 == b))))
        {
            if(a3 <= 10000 && b3 <= 10000)
            {
                cout << a3 << " " << b3 << endl;
                return;
            }
        }
        
        b3 = d - a3;
        if((b3 > 0) && (((a3 * b3 == a) && (a3 / b3 == b)) || ((a3 / b3 == a) && (a3 * b3 == b))))
        {
            if(a3 <= 10000 && b3 <= 10000)
            {
                cout << a3 << " " << b3 << endl;
                return;
            }
        }
    }

    ll a4 = (a+d)/2;
    if(a4 > 0)
    {
        ll b4;
        b4 = a - a4;
        if((b4 > 0) && (((a4 * b4 == b) && (a4 / b4 == c)) || ((a4 / b4 == b) && (a4 * b4 == c))))
        {
            if(a4 <= 10000 && b4 <= 10000)
            {
                cout << a4 << " " << b4 << endl;
                return;
            }
        }
        
        b4 = d - a4;
        if((b4 > 0) && (((a4 * b4 == b) && (a4 / b4 == c)) || ((a4 / b4 == b) && (a4 * b4 == c))))
        {
            if(a4 <= 10000 && b4 <= 10000)
            {
                cout << a4 << " " << b4 << endl;
                return;
            }
        }
    }

    ll a5 = (a+c)/2;
    if(a5 > 0)
    {
        ll b5;
        b5 = a - a5;
        if((b5 > 0) && (((a5 * b5 == b) && (a5 / b5 == d)) || ((a5 / b5 == b) && (a5 * b5 == d))))
        {
            if(a5 <= 10000 && b5 <= 10000)
            {
                cout << a5 << " " << b5 << endl;
                return;
            }
        }
        
        b5 = c - a5;
        if((b5 > 0) && (((a5 * b5 == b) && (a5 / b5 == d)) || ((a5 / b5 == b) && (a5 * b5 == d))))
        {
            if(a5 <= 10000 && b5 <= 10000)
            {
                cout << a5 << " " << b5 << endl;
                return;
            }
        }
    }

    ll a6 = (b+d)/2;
    if(a6 > 0)
    {
        ll b6;
        b6 = b - a6;
        if((b6 > 0) && (((a6 * b6 == a) && (a6 / b6 == c)) || ((a6 / b6 == a) && (a6 * b6 == c))))
        {
            if(a6 <= 10000 && b6 <= 10000)
            {
                cout << a6 << " " << b6 << endl;
                return;
            }
        }
        
        b6 = d - a6;
        if((b6 > 0) && (((a6 * b6 == a) && (a6 / b6 == c)) || ((a6 / b6 == a) && (a6 * b6 == c))))
        {
            if(a6 <= 10000 && b6 <= 10000)
            {
                cout << a6 << " " << b6 << endl;
                return;
            }
        }
    }
    
    cout << -1 << " " << -1 << endl;

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