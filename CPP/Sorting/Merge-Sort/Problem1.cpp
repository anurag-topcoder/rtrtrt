//Median Game- HackerEarth

#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
int n, t;

int main()
{
    IOS;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int mn = INT_MAX, mx = -1;
        for (int i = 0; i < n; i++)
        {
            int u;
            cin >> u;
            mx = max(mx, u);
            mn = min(mn, u);
        }
        cout << mx + mn << "\n";
    }
    return 0;
}