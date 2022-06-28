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
    ll n , m;
    cin >> n >> m;
    vll f(n) , c(m);
    for(int i = 0 ; i < n ; i++)
        cin >> f[i];
    for(int i = 0 ; i < m ; i++)
        cin >> c[i];
    ll cnt = 0 , p = 0 , q = 0;
    char pointer = 'f';
    while((p < f.size()) && (q < c.size()))
    {
        if(f[p] < c[q])
        {
            if(pointer != 'f')
            {
                pointer = 'f';
                cnt++;
            }
            p++;
        }
        else
        {
            if(pointer != 'c')
            {
                pointer = 'c';
                cnt++;
            }
            q++;
        }
    }
    if((p < f.size()) && (pointer != 'f'))
        cnt++;
    if((q < c.size()) && (pointer != 'c'))
        cnt++;
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