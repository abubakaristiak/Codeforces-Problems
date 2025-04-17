/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-18 || 01:55:00
 * * * * File    : A_Verify_Password.cpp
*/

// https://codeforces.com/contest/1976/problem/A

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
    int n; cin >> n;
    string s; cin >> s;
    vector<char> v1;
    vector<char> v2; 

    bool ok=false, flag=false;
    for(int i=0; i<n; i++){
        if(s[i]>='0' && s[i]<='9' && ok==false){
            v1.push_back(s[i]);
        }else if(s[i]>='a' && s[i]<='z'){
            ok=true;
            v2.push_back(s[i]);
        }else{
            flag=true;
            break;;
        }
    }
    if(flag){
        no;
    }else{
        if(is_sorted(v1.begin(), v1.end()) && is_sorted(v2.begin(), v2.end())){
            yes;
        }else{
            no;
        }
    }
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