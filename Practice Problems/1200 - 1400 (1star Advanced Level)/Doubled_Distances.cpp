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
    ll n;
    cin >> n;
    vll v(n);
    for(int i = 0 ; i < n ; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    vll diff(n);
    for(int i = 1 ; i < n ; i++)
        diff[i-1] = v[i] - v[i-1];
    int flag = 1;
    for(int i = 0 ; i < n-2 ; i++)
    {
        if((!(diff[i] == 2*diff[i+1])) && (!(2*diff[i] == diff[i+1])))
        {
            flag = 0;
            break;
        }
    }
    if(flag == 0)
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