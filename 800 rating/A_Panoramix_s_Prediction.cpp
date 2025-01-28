/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-27 || 23:40:14
 * * * * File    : A_Panoramix_s_Prediction.cpp
 */


// https://codeforces.com/problemset/problem/80/A


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


bool isPrime(int n){
    if(n<2){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


void solve()
{
    int n,m; cin >> n >> m;
    
    int nxPrime=n+1;
    while (!isPrime(nxPrime))
    {
        nxPrime++;
    }

    if(nxPrime==m){
        yes;
    }else no;
    
    
}


int main()
{
    fast();
    solve();

    return 0;


// Alhamdulillah
}