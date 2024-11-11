/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-11 || 20:40:24
 * * * * File    : A_Magnets.cpp
 */

// https://codeforces.com/problemset/problem/344/A

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
    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int cnt=1;
    for(int i=0; i<n-1; i++){
        if(v[i]!=v[i+1]){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}