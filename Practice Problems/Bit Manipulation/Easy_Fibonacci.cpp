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

ll arr[60];
void init()
{
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2 ; i < 60 ; i++)
    {
        ll sum = arr[i-1] + arr[i-2];
        arr[i] = sum;
    }
}

void solve()
{
    ll n;
    cin >> n;
    ll bits = ((ll)log2(n));
    ll index = pow(2,bits)-1;
    answer((arr[index%60])%10);
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