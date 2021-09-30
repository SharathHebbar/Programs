#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string t;
    cin >> t;

    int n = s.size();
    int m = t.size();

    map<char, int> m1;

    for (int i = 0; i < n; i++)
    {
        m1[s[i]]++;
    }

    for (auto it : m1)
    {
        cout << it.first << " " << it.second << endl;
    }

    for (int i = 0; i < m; i++)
    {
        if (m1.find(t[i]) != m1.end())
        {
            cout << t[i] << endl;
        }
    }
}