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

int ar[256];
void init()
{
    ar[0] = 0;
    for(int i = 1 ; i < 256 ; i++)
        ar[i] = ar[i >> 1] + (i & 1);
}

ll setBits(ll n)
{
    ll cnt = 0;
    for(int i = 0 ; i < 8 ; i++)
    {
        cnt += ar[n & 255];
        n = n >> 8;
    }
    return cnt;
}

void solve()
{
    ll n , a , b;
    cin >> n >> a >> b;
    ll bits;
    if(n < (setBits(a) + setBits(b)))
        bits = (2*n) - setBits(a) - setBits(b); // bits = n - (setBits(a) + setBits(b) - n)
    else
        bits = setBits(a) + setBits(b);
    ll ans = 0 , index = n-1;
    for(int i = bits ; i > 0 ; i--)
    {
        ans += pow(2,index);
        index--;
    }
    answer(ans);
}


int main()
{
    FAST;
    init();
    ll t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;

    return 0;
}