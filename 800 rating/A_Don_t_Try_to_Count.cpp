/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-17 || 23:19:17
 * * * * File    : A_Don_t_Try_to_Count.cpp
*/

// https://codeforces.com/contest/1881/problem/A

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
    int n,m; cin >> n >> m;
    string s1, s2; cin >> s1 >> s2;
    bool ok=false;
    for(int i=0; i<6; i++){
        if(s1.find(s2)!=-1){
            ok=true;
            cout << i << endl;
            break;
        }
        s1+=s1;
    }
    if(ok==false){
        cout << -1 << endl;
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