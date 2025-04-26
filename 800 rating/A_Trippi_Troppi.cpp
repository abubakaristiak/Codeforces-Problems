/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-26 || 12:19:39
 * * * * File    : A_Trippi_Troppi.cpp
*/

// https://codeforces.com/contest/2094/problem/A

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
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    string s; 
    getline(cin,s);
    stringstream ss(s);
    string word, res;
    while (ss >> word)
    {
        res.push_back(word[0]);
    }
    cout << res << endl;
    
}


int main()
{
    fast();
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}