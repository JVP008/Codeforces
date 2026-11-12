#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int count = 0;
    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.begin());
    int split = (n / 2);
    sort(v.begin() + split, v.end(), greater<int>());
    for (int i = 1; i < split; i++)
    {
        if (v[i - 1] < v[i])
        {
            count += 1;
        }
        else
        {
            break;
        }
    }
    int i = split;
    for (; i < n; i++)
    {
        if (v[i - 1] > v[i])
        {
            count += 1;
        }
        else
        {
            break;
        }
    }
    cout << count << "\n";
    for (int j : v)
    {
        cout << j << " ";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
