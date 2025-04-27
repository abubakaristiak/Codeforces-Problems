/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-28 || 00:17:20
 * * * * File    : B_Rudolph_and_Tic_Tac_Toe.cpp
*/

// https://codeforces.com/problemset/problem/1846/B

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
    char game[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> game[i][j];
        }
    }

    string res="DRAW";
    for(int i=0; i<3; i++){
        if(game[i][0]==game[i][1] && game[i][1]==game[i][2] && game[i][0]!='.'){
            res=game[i][0];
        }
        if(game[0][i]==game[1][i] && game[1][i]==game[2][i] && game[0][i]!='.'){
            res=game[0][i];
        }
    }
    if(game[0][0]==game[1][1] && game[1][1]==game[2][2] && game[0][0]!='.'){
        res=game[0][0];
    }
    if(game[0][2]==game[1][1] && game[1][1]==game[2][0] && game[0][2]!='.'){
        res=game[0][2];
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