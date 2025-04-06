/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-06 || 21:24:33
 * * * * File    : B_Different_String.cpp
*/

// https://codeforces.com/contest/1971/problem/B


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
    string s; cin >> s;
    string s1=s;
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==s[i+1]){
            cnt++;
        }
    }
    if(cnt==s.size()-1){
        no;
    }else{
        reverse(s.begin(), s.end());
        if(s1==s){
            asort(s);
            yes;
            cout << s << endl;
        }else{
            yes;
            cout << s << endl;
        }
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