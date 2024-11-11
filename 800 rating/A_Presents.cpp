/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-12 || 00:45:18
 * * * * File    : A_Presents.cpp
 */

// https://codeforces.com/problemset/problem/136/A

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
    int n; cin >> n;
    vector<int>v(101);
    for(int i=1; i<=n; i++){
        int x; cin >> x;
        v[x]=i;
    }
    
    for(int i=1; i<=n; i++){
        cout << v[i] << " ";
    }
    return 0;
}