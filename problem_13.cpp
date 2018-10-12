//Write a program for identify token (ex: find operator)

#include <bits/stdc++.h>
using namespace std;

char operators[]   = {'+', '-', '*', '/', '=', '(', ')', '!'};

bool isOperator(char c)
{
    for (int i = 0; i < 7; i++)
        if (operators[i] == c)
            return true;
    return false;
}

int main ()
{
    string expression;
    getline (cin, expression);
    bool started = false;
    set <char> found;
    for (int i = 0; i < expression.size(); i++){
        if (isOperator(expression[i])){
            found.insert(expression[i]);
            expression[i] = ' ';
        }
    }
    cout << "Operators" << endl;
    for (set<char>::iterator it = found.begin(); it != found.end(); it++)
        cout << *it << endl;
    cout << endl;    
    return 0;
}