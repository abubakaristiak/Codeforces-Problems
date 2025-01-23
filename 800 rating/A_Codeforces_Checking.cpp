/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-23 || 23:23:52
 * * * * File    : A_Codeforces_Checking.cpp
 */



// https://codeforces.com/problemset/problem/1791/A



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
    char ch; cin >> ch;
    string s="codeforces";
    bool flag=false;
    for(int i=0; i<s.size(); i++){
        if(s[i]==ch){
            flag=true;
        }
    }
    if(flag){
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