/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-01 || 23:36:12
 * * * * File    : A_Dubstep.cpp
 */



// https://codeforces.com/problemset/problem/208/A




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
    int n=s.size();


    for(int i=0; i<n; i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2;
            cout << " ";
        }else{
            cout << s[i];
        }
    }
}


int main()
{
    fast();
    int t = 1;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}