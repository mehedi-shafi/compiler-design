//Write a program that will count the number of white space in the input string.

#include <bits/stdc++.h>
using namespace std;
 
int main ()
{
    string in;
    getline(cin, in);
    int len = 0, spaces = 0; 
    while(in[len++] != '\0');
    for (int i = 0; i < len; i++)
        if (in[i] == ' ') spaces ++;
    cout << "Length: " << len-1 << " White spaces: " << spaces << endl;
    return 0;
}