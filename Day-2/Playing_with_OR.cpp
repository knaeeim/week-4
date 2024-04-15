#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int l = 0, r = 0, ans = 0, odd_count = 0;

        while (r < n)
        {
            if (a[r] % 2 == 1)
                odd_count++;
            if ((r - l + 1) == k)
            {
                if (odd_count >= 1)
                {
                    ans++;
                }
                if (a[l] % 2 == 1)
                {
                    odd_count--;
                }
                l++;
            }
            r++;
        }

        cout<<ans<<endl;
    }
    return 0;
}