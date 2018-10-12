//Write a program that will take a line as input and print the line with removing extra space.

#include <bits/stdc++.h>

using namespace std;

int main ()
{
    string s;
    getline(cin , s);
    char curr;
    for (int i = 0; i < s.size(); i++){
        if (curr == ' ' && s[i] == ' '){
            continue;
        }
        else{
            curr = s[i]; 
            cout << s[i];
        }
    }
    cout << endl;

    return 0;
}
