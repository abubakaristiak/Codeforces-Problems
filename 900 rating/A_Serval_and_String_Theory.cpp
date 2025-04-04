/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-04 || 23:04:51
 * * * * File    : A_Serval_and_String_Theory.cpp
*/


// https://codeforces.com/problemset/problem/2085/A


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
    int n,k; cin >> n >> k;
    string s; cin >> s;

    bool ok=false;
    for(int i=1; i<n; i++){
        if(s[i]!=s[i-1]){
            ok=true;
            break;;
        }
    }

    if(k>=1){
        if(ok){
            yes;
        }else no;
        return;
    }
    if(!ok){
        no;
        return;
    }

    string tmp=s;
    reverse(s.begin(), s.end());
    if(tmp<s){
        yes;
    }else no;
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