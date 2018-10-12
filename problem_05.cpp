//Write a program to copy string without strcpy.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string in;
    string out = "";

    getline(cin, in);
    for (int i = 0; i < in.size(); i++){
        out += in[i];
    }
    cout << out << endl;
    return 0;
}