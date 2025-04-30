/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-30 || 15:53:17
 * * * * File    : A_Lucky_Ticket.cpp
*/

// https://codeforces.com/problemset/problem/146/A

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

    int h=n/2;
    for(char ch:s){
        if(ch!='4' && ch!='7'){
            no;
            return;
        }
    }
    int s1=0, s2=0;
    for(int i=0; i<h; i++){
        s1+=s[i];
    }
    for(int i=h; i<n; i++){
        s2+=s[i];
    }
    if(s1==s2){
        yes;
    }else no;
}


int main()
{
    fast();
    int t=1;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}