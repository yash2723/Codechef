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
    int n , k;
    cin >> n >> k;
    int arr[n] , arr1[n] , arr2[n];
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];
    int max1=*max_element(arr,arr+n);
    if(k == 0)
    {
        for(int i = 0 ; i < n ; i++)
            cout << arr[i] << " " ;   
    }
    else
    {
        for(int i = 0 ; i < n ; i++)
        {
            arr1[i] = max1 - arr[i];
            if(k&1) 
                cout << arr1[i] << " ";
        }
        int max2 = *max_element(arr1,arr1+n);
        for(int i = 0 ; i < n ; i++)
        {
            arr2[i] = max2 - arr1[i];
            if(!(k&1))
                cout << arr2[i] << " ";
        }
    }
    cout<<endl;
}


int main()
{
    FAST;

    ll t = 1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;

    return 0;
}