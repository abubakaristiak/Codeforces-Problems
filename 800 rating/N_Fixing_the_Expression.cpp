/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : Abu Bakar Istiak
 * * * * Created : 2025-03-24 || 17:26:43
 * * * * File    : N_Fixing_the_Expression.cpp
*/


// https://codeforces.com/problemset/problem/2038/N


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
    int val1=s[0], val2=s[2];
    char oper=s[1];

    if(oper=='>'){
        if(val1<val2){
            s[1]='<';
        }else if(val1==val2){
            s[1]='=';
        }
    }else if(oper=='<'){
        if(val1>val2){
            s[1]='>';
        }else if(val1==val2){
            s[1]='=';
        }
    }else{
        if(val1!=val2){
            if(val1>val2){
                s[1]='>';
            }else if(val1<val2){
                s[1]='<';
            }
        }
    }
    cout << s << endl;
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah---(Ramadan Kareem)
}