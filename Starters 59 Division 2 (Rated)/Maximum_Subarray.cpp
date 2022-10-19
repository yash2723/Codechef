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

int maxSubArraySum(vll arr, int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

void solve()
{
    ll n, m;
    cin >> n;
    vll a(n);
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    cin >> m;
    vll b(m);
    for(int i = 0 ; i < m ; i++)
        cin >> b[i];

    ll sum = 0;
    for(auto it : b)
        if(it > 0)
            sum += it;

    ll maxi = maxSubArraySum(a, a.size());

    ll pre = 0;
    for (ll i = 0 , s = 0; i < n; i++) {
        s += a[i];
        pre = max(pre, s);
    }

    ll suff = 0;
    for (ll i = n-1 , s = 0; i >= 0; i--) {
        s += a[i];
        suff = max(suff, s);
    }

    answer(max3(maxi, pre + sum, suff + sum));
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