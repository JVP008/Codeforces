#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x;
    cin >> x;

    string n = to_string(x + 1);
    map<char, int> frequency;

    int i = 0;
    int count = 0;

    while (i != n.size()) {
        frequency[n[i]] += 1;

        if (frequency[n[i]] == 2) {
            count += 1;
        }

        if (count == 1) {
            n = to_string(stoi(n) + 1);

            frequency.clear();
            i = 0;
            count = 0;

            continue; //jump back to the loop!!
        }
        i += 1;
    }

    cout << stoi(n) << "\n";

    return 0;
}
