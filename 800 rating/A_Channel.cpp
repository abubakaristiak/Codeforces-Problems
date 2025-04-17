/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-18 || 03:15:13
 * * * * File    : A_Channel.cpp
*/

// https://codeforces.com/contest/1863/problem/A

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
    int sub, online, notfi; cin >> sub >> online >> notfi;
    string s; cin >> s;
    if(sub==online){
        yes;
        return;
    }
    int read=online;
    bool ok=false;
    for(int i=0; i<notfi; i++){
        if(s[i]=='+'){
            read++;
            online++;
        }else{
            read--;
        }if(read==sub){
            ok=true;
            break;;
        }
    }
    if(ok){
        yes;
    }else{
        if(online>=sub){
            cout << "MAYBE" << endl;
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