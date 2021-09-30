#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b)
{
    if (a > b)
        return true;
    return false;
}

int main()
{
    string direction;
    cin >> direction;
    int current;
    cin >> current;
    int n;
    cin >> n;
    vector<int> floors(n);
    for (int i = 0; i < n; i++)
        cin >> floors[i];

       int up;
    if (direction == "UP")
        up = 0;
    else if (direction == "DN")
        up = 1;
    else
        up = 2;
    if (current == -1 and current > 15)
        up = 2;
    for (int i = 0; i < n; i++)
    {
        if (floors[i] == -1 or floors[i] > 15)
        {
            up = 2;
            break;
        }
    }

    if (up == 0)
    {
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            if (floors[i] >= current)
                v1.push_back(floors[i]);
            else
                v2.push_back(floors[i]);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end(), cmp);
        for (int i = 0; i < v1.size(); i++)
            cout << v1[i] << endl;
        for (int i = 0; i < v2.size(); i++)
            cout << v2[i] << endl;
    }
    else if (up == 1)
    {
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            if (floors[i] <= current)
                v1.push_back(floors[i]);
            else
                v2.push_back(floors[i]);
        }
        sort(v2.begin(), v2.end());
        sort(v1.begin(), v1.end(), cmp);
        for (int i = 0; i < v1.size(); i++)
            cout << v1[i] << endl;
        for (int i = 0; i < v2.size(); i++)
            cout << v2[i] << endl;
    }
    else
    {
        cout << "Invalid Input\n";
    }
}