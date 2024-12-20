/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-18 || 23:07:43
 * * * * File    : A_Holiday_Of_Equality.cpp
 */


// https://codeforces.com/problemset/problem/758/A



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
    int n; cin >> n;
    vector<int> v(n);
    
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    asort(v);
    int cnt=0;

    for(int i=0; i<n-1; i++){
        cnt=cnt+(v[n-1]-v[i]);
    }
    cout << cnt << endl;

    return 0;


// Alhamdulillah
}