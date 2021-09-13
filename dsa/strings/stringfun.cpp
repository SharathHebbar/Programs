#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
    // string a, b;
    // cin >> a; //without spaces
    // cout << a << endl;
    // getline(cin, b); //with spaces
    // cout << b << endl;

    //int to string

    string s;
    int z = 100;
    //to_string
    s = to_string(z);
    cout << s << endl;
    //string stream string to int
    string n = "100";
    stringstream ss;
    ss << n;
    int i;
    ss >> i;
    cout << i << endl;
*/
    //push_back pop_back
    string s = "Hell";
    s.push_back('o');
    s.push_back('o');
    cout << s << endl;
    s.pop_back();
    cout << s << endl;

    //capacity

    cout << s.capacity() << endl;

    reverse(s.begin(), s.end());
    cout << s << endl;
    reverse(s.rbegin(), s.rend());
    cout << s << endl;

    string r = "HOOOiii";
    cout << s << "\t" << r << endl;
    swap(s, r);
    cout << s << "\t" << r << endl;
}