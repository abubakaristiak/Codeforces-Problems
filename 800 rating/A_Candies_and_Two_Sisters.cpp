/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-07 || 23:06:21
 * * * * File    : A_Candies_and_Two_Sisters.cpp
 */


// https://codeforces.com/problemset/problem/1335/A



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
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        if(n==1 || n==2){
            cout << 0 << endl;
        }else{
            cout << (n-1)/2 << endl;
        }
    }
    
    return 0;


// Alhamdulillah
}