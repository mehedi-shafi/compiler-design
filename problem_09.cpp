//Write a program that will count number of vowel, consonant and digit and whitespace.
#include <bits/stdc++.h>
using namespace std;

bool isChar(char c)
{
    if (c >= 'A' && c <= 'Z')
        return true;
    if (c >= 'a' && c <= 'z')
        return true;
    return false;
}

bool isVowel(char c)
{
    char vowels[10] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    for (int i = 0; i < 10; i ++)
        if (c == vowels[i])
            return true;
    return false;
    
}

bool isDigit(char c)
{
    if (c >= '0' && c <= '9')
        return true;
    return false;
}
int main ()
{
    string s;
    getline(cin, s);
    int vowels = 0, spaces = 0, consonant = 0, digits = 0;
    for (int i = 0; i < s.size(); i++){
        if (!isDigit(s[i])){
            if (s[i] == ' '){
                spaces ++;
            }
            if(isChar(s[i])){
                if (isVowel(s[i])){
                    vowels ++;
                }
                else{
                    consonant++;
                }
            }
        }
        else{
            digits ++;
        }
    }
    cout << "Digits: " << digits << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonant << endl;
    cout << "Spaces: " << spaces << endl;
    return 0;
}