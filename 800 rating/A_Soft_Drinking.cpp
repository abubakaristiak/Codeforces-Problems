/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-16 || 20:37:46
 * * * * File    : A_Soft_Drinking.cpp
 */


// https://codeforces.com/problemset/problem/151/A


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
int main()
{
    fast();
    int n,k,l,c,d,p,nl,np; 
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k*l;
    total_drink = total_drink/nl;
    int total_slices = c*d;
    int total_salt = p/np;
    int ans = min(min(total_drink, total_slices), total_salt)/n;
    cout << ans << endl;
    return 0;


// Alhamdulillah
}