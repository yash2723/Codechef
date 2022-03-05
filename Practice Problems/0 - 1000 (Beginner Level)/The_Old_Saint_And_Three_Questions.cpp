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
    int a1 , a2 , a3 , b1 , b2 , b3;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    multiset<int> m1 , m2;
    m1.insert(a1);
    m1.insert(a2);
    m1.insert(a3);
    m2.insert(b1);
    m2.insert(b2);
    m2.insert(b3);
    if(m1.count(0) == m2.count(0))
        answer("Pass");
    else
        answer("Fail");
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