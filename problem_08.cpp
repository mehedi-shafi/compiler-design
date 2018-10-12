//Write a program to make a simple calculator that takes only number as input.

#include <bits/stdc++.h>

using namespace std;

bool isInt(char a)
{
    if (a >= '0' && a <= '9')
        return true;
    return false;
}

int main()
{
    char ac, bc;
    cin >> ac >> bc;
    if (isInt(ac) && isInt(bc)){
        int a = ac-'0', b = bc-'0';
        cout << "Add: " << a+b << endl;
        cout << "Subtraction: " << a-b << endl;
        cout << "Multiplication: " << a*b << endl;
        cout << "Division: quotient = " << a/b << " remainder = " << a%b << endl; 
    }
    else{
        cout << "Please enter two valid integer numbers." << endl;
    }
    return 0;
}