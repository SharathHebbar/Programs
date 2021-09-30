#include <bits/stdc++.h>

using namespace std;

bool isPal(int n)
{
    string s = to_string(n);
    string r = s;
    reverse(s.begin(), s.end());
    if (s == r)
        return true;
    return false;
}

bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (sqrt(n) < 2)
        return true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int ispp(int l, int r)
{
    int c = 0;
    vector<int> v;
    for (int i = l; i <= r; i++)
    {
        if (isPrime(i))
            v.push_back(i);
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (isPal(v[i]))
            c++;
    }
    return c;
}

int main()
{

    int l, r;
    cin >> l >> r;
    cout << ispp(l, r) << endl;
}