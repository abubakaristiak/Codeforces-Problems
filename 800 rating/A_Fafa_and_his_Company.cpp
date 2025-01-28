/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-28 || 23:44:28
 * * * * File    : A_Fafa_and_his_Company.cpp
 */


// https://codeforces.com/problemset/problem/935/A


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
    int n; cin >> n;
    int cnt=0; 
    for(int i=1; i<n; i++){
        if(n%i==0){
            cnt++;
        }
    }
    cout << cnt << endl;
}


int main()
{
    fast();
    solve();

    return 0;


// Alhamdulillah
}