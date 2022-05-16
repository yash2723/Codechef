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

// Useful Functions
bool isOdd(int n)
{
    if(n % 2 == 0)
        return false;
    else
        return true;
}

bool isEven(int n)
{
    if(n % 2 == 0)
        return true;
    else
        return false;
}

void solve()
{
    ll n , m;
    cin >> n >> m;
    if(isOdd(n) && isOdd(m))
        ansno;
    else
        ansyes;
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