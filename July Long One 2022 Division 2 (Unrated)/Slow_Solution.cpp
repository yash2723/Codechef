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


void solve()
{
    ll maxT , maxN , maxSum;
    cin >> maxT >> maxN >> maxSum;
    ll cnt = maxSum / maxN , rem = 0;
    if(maxSum % maxN != 0)    
        rem = maxSum % maxN;
    ll loop = min(cnt+min((ll)1,rem) , maxT);
    ll ans = 0;
    while(loop--)
    {
        if(cnt > 0)
            ans += (pow(maxN,2));
        else
            ans += (pow(rem,2));
        cnt--;
    }
    answer(ans);
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