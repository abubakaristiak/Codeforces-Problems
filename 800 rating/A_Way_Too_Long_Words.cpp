//https://codeforces.com/problemset/problem/71/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string word;
        cin >> word;

        int len = word.length();
        if(len>10){
            cout << word[0] << len-2 << word[len-1] << endl;
        }
        else{
            cout << word << endl;
        }
    }
    
    return 0;
}