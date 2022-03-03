#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> arr(n);
        for(int i = 0 ; i < n ; i++)
            cin >> arr[i];
        sort(arr.begin(),arr.end());
        long long int count = 8;
        for(auto it : arr)
        {
            if(it == 6 || it == 7 || it == 13 || it == 14 || it == 20 || it == 21 || it == 27 || it == 28)
                continue;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}