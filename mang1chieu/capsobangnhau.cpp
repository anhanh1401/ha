#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int s = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int res = a[1];
        for (int i = 2; i <= n; i++)
        {
            if (a[i] == res)
            {
                s++;
                res = a[i];
            }
            else
            {
                res = a[i];
            }
        }
        cout << s << endl;
        s = 0;
    }
}