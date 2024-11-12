/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-12 || 16:13:39
 * * * * File    : A_Even_Odds.cpp
 */


// https://codeforces.com/problemset/problem/318/A


#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
int main()
{
    fast();
    ll n,k; cin >> n >> k;
    ll oddCnt=(n+1)/2;
    
    if(k<=oddCnt){
        cout << 2*k-1 << endl;
    } else{
        cout << 2*(k-oddCnt) << endl;
    }
    return 0;
}