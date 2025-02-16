/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-16 || 23:43:18
 * * * * File    : A_Vlad_and_the_Best_of_Five.cpp
*/


// https://codeforces.com/problemset/problem/1926/A


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
    string s; cin >> s;
    int a_cnt=0, b_cnt=0;
    for(int i=0; i<5; i++){
        if(s[i]=='A'){
            a_cnt++;
        }else if(s[i]=='B'){
            b_cnt++;
        }
    }
    if(a_cnt>b_cnt){
        cout << "A" << endl;
    }else cout << "B" << endl;
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