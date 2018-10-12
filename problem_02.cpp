//Write a program that print word in new line after removing extra space.
#include <bits/stdc++.h>

using namespace std;

int main ()
{
    string in;
    getline(cin, in);

    string buf;
    stringstream ss(in);

    vector<string> dic;

    while (ss >> buf)
        dic.push_back(buf);
    
    for (int i = 0; i < dic.size(); i++){
        cout << dic[i] << endl;
    }
    return 0;
}