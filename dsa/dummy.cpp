// #include <bits/stdc++.h>

// using namespace std;

// int main(int argc, char *argv[])
// {
//     char a[argc];
//     for (int i = 0; i < argc; i++)
//     {
//         cout << argv[i];
//     }
//     string s = argv[argc];

//     cout << s << endl;
//     return 0;
// }

// Name of program mainreturn.cpp
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout << "You have entered " << argc
         << " arguments:"
         << "\n";

    for (int i = 0; i < argc; ++i)
    {

        cout << argv[1] << endl;
    }
    //cout << argv[i] << "\n";

    return 0;
}
