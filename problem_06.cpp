//Write a program to check input is an alphabet or number or special character.

#include <bits/stdc++.h>

using namespace std;

int main ()
{
    char c;
    cin >> c;
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
        cout << c << " - is a character." << endl;
    }
    else if (c >= '0' && c <= '9'){
        cout << c << " - is a numeric." << endl;
    }
    else {
        cout << c << " - is a special character." << endl;
    }
    return 0;
}