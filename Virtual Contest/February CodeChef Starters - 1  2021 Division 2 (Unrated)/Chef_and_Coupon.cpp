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
    ll d , c;
    cin >> d >> c;
    vll a(3) , b(3);
    ll sum_1 = 0 , sum_2 = 0;
    for(int i = 0 ; i < 3 ; i++)
    {
        cin >> a[i];
        sum_1 += a[i];
    }
    for(int i = 0 ; i < 3 ; i++)
    {
        cin >> b[i];
        sum_2 += b[i];
    }
    ll ans1 = c , ans2 = d + d + sum_1 + sum_2;
    ans1 += (sum_1 >= 150) ? sum_1 : sum_1+d;
    ans1 += (sum_2 >= 150) ? sum_2 : sum_2+d;
    if(ans1 < ans2)
        ansyes;
    else
        ansno;
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