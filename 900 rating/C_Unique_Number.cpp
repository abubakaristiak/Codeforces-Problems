/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-07 || 22:29:48
 * * * * File    : C_Unique_Number.cpp
*/


// https://codeforces.com/problemset/problem/1462/C


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


void istiak()
{
    int x; cin >> x;
    if(x>45){
        cout << -1 << endl;
    }else{
        string res;
        for(int i=9; i>=1; i--){
            if(x-i>=0){
                x-=i;
                res+=i+48;
            }
            if(x==0){
                break;
            }
        }
        reverse(res.begin(), res.end());
        cout << res << endl;
    }
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--) {
        istiak();
    }

    return 0;


// Alhamdulillah
}