#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int k = 3; k <= n; k++)
    {
        vector<int> temp(v.begin(), v.begin() + k);

        sort(temp.rbegin(), temp.rend());

        cout << temp[2] << '\n';
    }
    return 0;
}
