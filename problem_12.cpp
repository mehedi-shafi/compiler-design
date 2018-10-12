//Write a program for symbol table.

#include <bits/stdc++.h>
using namespace std;

char operators[]   = {'+', '-', '*', '/', '=', '(', ')', '!'};
string keyWords[100] = {"printf", "int", "float", "double", "scanf", "for", "return", "char", "string", "if"};
string header[100] = {"<stdio.h>", "<conio.h>", "<string.h>", "<math.h>", "<bits/stdc++.h>"};

bool isOperator(char c)
{
    for (int i = 0; i < 7; i++)
        if (operators[i] == c)
            return true;
    return false;
}

bool isKeyWord(string s)
{
    for (int i = 0 ; i < 10; i++)
        if (keyWords[i] == s)
            return true;
    return false;
}

bool isHeader (string s)
{
    for (int i = 0; i < 5; i++){
        if (s == header[i])
            return true;
    }
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
    set<string> keywordFound;
    set<string> headerFound;
    istringstream iss(expression);
    vector<string> results((istream_iterator<string>(iss)), istream_iterator<string>());
    for (int i = 0; i < results.size(); i++){
        if (isKeyWord(results[i]))
            keywordFound.insert(results[i]);
        if (results[i] == "#include"  && isHeader(results[i+1])){
            headerFound.insert(results[i+1]);
        }
    }
    cout << "Keywords" << endl;
    for (set<string>::iterator it = keywordFound.begin(); it != keywordFound.end(); it++)
        cout << *it << endl;
    cout << endl;
    cout << "Header" << endl;
    for (set<string>::iterator it = headerFound.begin(); it != headerFound.end(); it++)
        cout << *it << endl;
    cout << endl;
    return 0;
}