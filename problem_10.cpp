//Write a program that will take a string as input and print whether this is a comment or not.

#include <bits/stdc++.h>
using namespace std;

bool threeStar(string input, int i)
{
    if (input[i] == '*' && input[i+1] == '*' && input[i+2] == '*' )
        return true;
    return false;
}

int main()
{
    string input;
    getline (cin, input);
    bool comment = false, multiline = false;
    for (int i = 0; i < input.size(); i++){
        if (threeStar(input, i) && !comment){
            comment = true;
        }
        else if (threeStar(input, i) && comment){
            multiline = true;
            comment = false;
        }
    }
    if (multiline)
        cout << "This is a multi line comment" << endl;
    else if (comment)
        cout << "This is a single line comment" << endl;
    else
        cout << "This is not a comment." << endl;
    return 0;
}