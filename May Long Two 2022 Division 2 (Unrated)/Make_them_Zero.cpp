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

bool isPW2(ll n)
{
    if(n == 0)
        return false;
    ll t = log2(n);
    if(n == pow(2,t))
        return true;
    else
        return false;
}

void solve()
{
    ll n;
    cin >> n;
    set<ll> a;
    for(int i = 0 ; i < n ; i++)
    {
        int num;
        cin >> num;
        a.insert(num);
    }
    set<ll> hash;
    vll v;
    for(auto it : a)
        v.pb(it);
    for(int i = 0 ; i < v.size() ; i++)
    {
        if(isPW2(v[i]))
        {
            hash.insert(v[i]);
            v[i] = 0;
        }
    }
    // sort(v.begin() , v.end());
    // while((v[0] != 0) && (v[v.size()-1] != 0))
    // {
        for(int i = 0 ; i < v.size() ; i++)
        {
            if(v[i] == 0)
                continue;
            else
            {
                while(v[i] != 0)
                {
                    ll sub = log2(v[i]);
                    // cout << v[i] << " - " << pow(2,sub) << endl;
                    hash.insert(pow(2,sub));
                    v[i] = v[i] - pow(2,sub);
                }
            }
        }
    // }
    // for(auto it : hash)
    //     cout << it << " ";
    answer(hash.size());
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