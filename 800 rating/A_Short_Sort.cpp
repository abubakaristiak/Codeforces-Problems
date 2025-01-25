/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-25 || 23:21:58
 * * * * File    : A_Short_Sort.cpp
 */


// https://codeforces.com/problemset/problem/1873/A


#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;


void solve()
{
    string s; cin >> s;
    string resultingString="abc";

    int misCnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=resultingString[i]){
            misCnt++;
        }
    }
    if(misCnt<=2){
        yes;
    }else no;
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    

    return 0;


// Alhamdulillah
}