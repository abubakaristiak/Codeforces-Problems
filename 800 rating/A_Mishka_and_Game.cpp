/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-04 || 00:32:21
 * * * * File    : A_Mishka_and_Game.cpp
 */



// https://codeforces.com/problemset/problem/703/A



#include<bits/stdc++.h>
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
using namespace std;


void solve()
{
    int m_cnt=0, c_cnt=0;
    int t;cin >> t;
    while (t--)
    {
        int m,c; cin >> m >> c;
        if(m>c){
            m_cnt++;
        }else if(m<c){
            c_cnt++;
        }
    }

    if(m_cnt>c_cnt){
        cout << "Mishka" << endl;
    }else if(m_cnt<c_cnt){
        cout << "Chris" << endl;
    }else cout << "Friendship is magic!^^" << endl;
    
}


int main()
{
    fast();
    solve();
    return 0;


// Alhamdulillah
}