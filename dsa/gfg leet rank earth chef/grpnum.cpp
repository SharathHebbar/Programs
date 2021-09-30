#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first > b.first;
    else if (a.second > b.second)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] += 1;
    }
    vector<pair<int, int>> p;
    for (auto &it : mp)
    {
        p.push_back(it);
    }
    sort(p.begin(), p.end(), cmp);
    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i].first << " ";
    }
    cout << "\n";
}