/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-12 || 00:55:00
 * * * * File    : B_Drinks.cpp
 */

// https://codeforces.com/problemset/problem/200/B


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
    vector<int> v(n);
    double sum=0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        sum+=v[i];
    }
    
    double ans = (sum/n);
    cout << fixed << setprecision(12) << ans << endl;

    return 0;
}