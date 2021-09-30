#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();

    int i = 0;
    while (i < n / 2)
    {
        swap(s[i], s[n - 1 - i]);
        i++;
    }
    cout << s << endl;
}
