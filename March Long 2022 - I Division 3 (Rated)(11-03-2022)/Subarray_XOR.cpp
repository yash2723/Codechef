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
    string s;
    cin >> s;

    vll v(n);
    for(int i = 0 ; i < n ; i++)
    {
        if(s[i] == '1')
        {
            v[n-i-1] = i+1;
        }
    }
    
    for(int i = n-2 ; i >= 0 ; i--)
        v[i] += v[i+1];

    ll sum = 0;
    for(int i = 0 ; i < v.size() ; i++)
    {
        if(v[i] % 2 != 0)
            sum += pow(2,i);
    }
    answer(sum);

    // ll n;
    // cin >> n;
    // string s;
    // cin >> s;
    // ll sum = 0 , count = 0;
    // vll v(n);

    // reverse(s.begin() , s.end());

    // for(int i = n-1 ; i >= 0 ; i--)
    // {
    //     if(s[i] == '1')
    //     {
    //         for(int j = i ; j >= 0 ; j--)
    //             v[j]++;
    //     }
    //     count = 0;
    //     if(i > 0)
    //     {
    //         while((i-1) >= count)
    //         {
    //             for(int j = i-1 ; j >= count ; j--)
    //             {
    //                 if(s[j] == '1')
    //                     v[j-count]++;
    //             }
    //             count++;
    //         }
    //     }
    //     if(v[i] % 2 != 0)
    //         sum += pow(2 , i);
    // }

    // answer(sum);

    // for(int i = 0 ; i < s.size() ; i++)
    // {
    //     if(s[i] == '1')
    //     {
    //         for(int j = n-1-i ; j >= 0 ; j--)
    //             v[j]++;
            
    //         count = n;
    //         while((i+1) < count)
    //         {
    //             int index = 0;
    //             for(int j = n-count ; j < (i) ; j++)
    //             {
    //                 if(s[j] == '1')
    //                     v[index]++;
    //                 index++;
    //             }
    //             count--;
    //         }
    //     }
    //     else
    //     {
    //         while((i+1) < count)
    //         {
    //             int index = 0;
    //             for(int j = i+1 ; j < count ; j++)
    //             {
    //                 if(s[j] == '1')
    //                     v[index]++;
    //                 index++;
    //             }
    //             count--;
    //         }
    //     }

    //     if(v[n-1-i] % 2 != 0)
    //         sum += pow(2 , n-1-i);
    // }
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