/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-05-05 || 14:40:27
 * * * * File    : B_Make_Majority.cpp
*/

// https://codeforces.com/contest/1988/problem/B

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
    string s; cin >> s;
    
    char prev='1';
    vector<int> v;
    for(char ch:s){
        if(ch=='1'){
            v.push_back(1);
        }
        if(ch=='0' && prev=='1'){
            v.push_back(0);
        }
        prev=ch;
    }
    int oneCnt=count(v.begin(), v.end(), 1);
    int zeroCnt=count(v.begin(), v.end(), 0);
    // cout << oneCnt << " " << zeroCnt << endl;
    
    if(oneCnt>zeroCnt){
        cyes;
    }else cno;
    
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