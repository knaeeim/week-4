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
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> ans;

        ans.push_back(v[0]);

        for (int i = 1; i < n; i++)
        {
            if (v[i - 1] <= v[i])
            {
                ans.push_back(v[i]);
            }
            else
            {
                ans.push_back(v[i]);
                ans.push_back(v[i]);
            }
        }

        cout<<ans.size()<<endl;
        for (int x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}