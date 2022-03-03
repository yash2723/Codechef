#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n < 3)
            cout << -1 << endl;
        else if(n % 2 == 1)
        {
            for(int i = 1 ; i <= n ; i++)
                cout << i << " ";
            cout << endl;
        }
        else
        {
            cout << "2 3 1 4 ";
            for(int i = 5 ; i <= n ; i++)
                cout << i << " ";        
            cout << endl;
        }
    }
    return 0;
}