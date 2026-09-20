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
        vector<int> v(n);
        for (auto &x : v)
        {
            cin >> x;
        }
        vector<int> even;
        vector<int> odd;
        int size = v.size();
        for (int i = 0; i < size; i++)
        {
            if (i % 2 == 0)
            {
                even.emplace_back(v[i]);
            }
            else
            {
                odd.emplace_back(v[i]);
            }
        }
        int count_even = 0;
        int count_odd = 0;
        for (int i = 0; i < even.size(); i++)
        {
            if (even[i] % 2 == 0)
            {
                count_even += 1;
            }
            else
            {
                count_odd += 1;
            }
        }
        bool ok;
        if (count_even == 0 || count_odd == 0)
        {
            ok = true;
        }
        else
        {
            ok = false;
        }
        if (ok == false)
        {
            cout << "NO\n";
        }
        else{
        count_even = 0;
        count_odd = 0;
        {
            for (int i = 0; i < odd.size(); i++)
            {
                if (odd[i] % 2 == 0)
                {
                    count_even += 1;
                }
                else
                {
                    count_odd += 1;
                }
            }
            if (count_even == 0 || count_odd == 0)
            {
                ok = true;
            }
            else
            {
                ok = false;
            }
            if (ok == true)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}

    return 0;
}
