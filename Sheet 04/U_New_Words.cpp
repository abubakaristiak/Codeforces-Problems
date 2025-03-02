/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-01 || 23:17:23
 * * * * File    : U_New_Words.cpp
*/



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
    string s; cin >> s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    unordered_map<char, int> fre;
    for(char ch:s){
        if(ch=='E' || ch=='G' || ch=='Y' || ch=='P' || ch=='T'){
            fre[ch]++;
        }
    }
    int minCnt=INT_MAX;
    string target="EGYPT";
    for(char ch:target){
        minCnt=min(minCnt, fre[ch]);
    }
    cout << minCnt << endl;
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