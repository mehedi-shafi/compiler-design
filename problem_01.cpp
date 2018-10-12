//Write a program that print word in new line when get white space.

#include <bits/stdc++.h>

using namespace std;

int main ()
{
    string input;
    getline(cin, input);
    string temp = "";
    for (int i = 0 ; i < input.size(); i++){
        if (input[i] == ' '){
            cout << temp << endl;
            temp = "";
        }
        else{
            temp += input[i];
        }
    }
    cout << temp << endl;
    return 0;
}
