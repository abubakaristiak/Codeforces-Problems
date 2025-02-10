/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-10 || 21:10:38
 * * * * File    : A_Array_with_Odd_Sum.cpp
*/


// https://codeforces.com/problemset/problem/1296/A


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
    vector<int> v(n);
    ll sum=0;
    ll odd_cnt=0, even_cnt=0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        sum+=v[i];
        if(v[i]%2==0){
            even_cnt++;
        }else{
            odd_cnt++;
        }
    }
    if(sum%2!=0){
        yes;
    }else if(odd_cnt>0 && even_cnt>0){
        yes;
    }else{
        no;
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