#include <bits/stdc++.h>

using namespace std;

int main()
{

    string data;
    ofstream f1;
    f1.open("f1.txt");
    cout << "Hello! hii";
    cout << "how are you";
    f1.close();
    ifstream f2;
    f2.open("f1.txt");
    cout << "Reading from the file" << endl;
    f2 >> data;
    cout << data << endl;
}