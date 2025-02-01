/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-31 || 23:51:56
 * * * * File    : A_Div_7.cpp
 */


// https://codeforces.com/contest/1633/problem/A



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


void solve(){
    int n; cin >> n;
    if(n%7==0){
        cout << n << endl;
        return;
    }
    n=10*(n/10);
    if(n%7==0){
        cout << n << endl;
        return;
    }
    n++;
    while (n%10!=0)
    {
        if(n%7==0){
            break;
        }
        n++;
    }
    cout << n << endl;
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