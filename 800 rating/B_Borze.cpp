/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-22 || 23:35:20
 * * * * File    : B_Borze.cpp
 */



// https://codeforces.com/problemset/problem/32/B



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
    for(int i=0; i<s.size(); i++){
        if(s[i]=='.'){
            cout << '0';
        }else if(s[i]=='-' && s[i+1]=='.'){
            cout << '1';
            i++;
        }
        else{
            cout << '2';
            i++;
        }
    }

}


int main()
{
    fast();
    solve();

    return 0;


// Alhamdulillah
}