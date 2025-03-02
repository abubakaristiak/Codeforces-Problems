//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    
    int n;
    cin >> n;
    string s;
    cin >> s;

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += s[i]-'0';
    }
    cout << sum << endl;

    return 0;
}