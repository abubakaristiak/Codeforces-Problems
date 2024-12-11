/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-11 || 23:34:19
 * * * * File    : A_Sum.cpp
 */


// https://codeforces.com/problemset/problem/1742/A



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
int main()
{
    fast();
    int t; cin >> t;
    while (t--)
    {
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        asort(v);
        if(v[0]+v[1]==v[2]){
            yes;
        }else no;
    }
    
    return 0;


// Alhamdulillah
}