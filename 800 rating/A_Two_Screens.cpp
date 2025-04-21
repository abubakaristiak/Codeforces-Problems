/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-21 || 23:45:37
 * * * * File    : A_Two_Screens.cpp
*/

// https://codeforces.com/problemset/problem/2025/A

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
    string s1,s2; cin >> s1 >> s2;
    int len1=s1.size(), len2=s2.size();
    int cnt=0;
    for(int i=0; i<len1; i++){
        if(s1[i]==s2[i]){
            cnt++;
        }else{
            break;;
        }
    }
    int res=len1+len2;
    if(cnt){
        res-=(cnt-1);
    }
    cout << res << endl;
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