//873D Merge-sort Codeforces

#include <iostream>
using namespace std;
int n, k, a[100010], i = 1;
void f(int l, int r)
{
    if (k < 1 || l + 1 == r)
        return;
    k -= 2;
    int mid = l + r >> 1;
    swap(a[mid - 1], a[mid]);
    f(l, mid), f(mid, r);
}
main()
{
    cin >> n >> k, a[0] = 1;
    for (; i < n; ++i)
        a[i] = a[i - 1] + 1;
    --k, f(0, n);
    if (k)
        cout << -1;
    else
        for (i = 0; i < n; ++i)
            cout << a[i] << ' ';
}