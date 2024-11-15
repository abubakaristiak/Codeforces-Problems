/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-15 || 17:02:17
 * * * * File    : A_Divisibility_Problem.cpp
 */


// https://codeforces.com/problemset/problem/1328/A


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
    int t; cin >> t;
    while (t--)
    {
        int a,b; cin >> a >> b;
        if(a%b==0) cout << 0 << endl;
        else{
            int ans=b-(a%b);
            cout << ans << endl;
        }
    }
    
    return 0;
}