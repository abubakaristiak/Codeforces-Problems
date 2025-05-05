/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-05-05 || 12:09:36
 * * * * File    : A_Simple_Palindrome.cpp
*/

// https://codeforces.com/contest/2005/problem/A

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define sz(x) x.size()
#define endl "\n"
#define afor(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define rfor(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{

    int n; cin >> n;
    string s="aeiou";
    vector<char> v;
    for(int i=0; i<n; i++){
        v.push_back(s[i%5]);
    }
    asort(v);
    for(auto ch:v){
        cout << ch;
    }
    cout << endl;
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}