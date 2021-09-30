#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int arr[s.size()];
    for (int i = 0; i < s.size(); i++)
    {
        arr[i] = s[i] - '0';
    }
    for (int i = 0; i < s.size(); i++)
        cout << int(s[i] - '0');
    cout << endl;
    for (int i = 0; i < s.size(); i++)
        cout << arr[i];
    return 0;
}