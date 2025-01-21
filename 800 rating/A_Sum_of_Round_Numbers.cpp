/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-21 || 22:41:22
 * * * * File    : A_Sum_of_Round_Numbers.cpp
 */


// https://codeforces.com/problemset/problem/1352/A



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


void solve()
{
    int n; cin >> n; 
    int ar[6];
    int sz=0, m=1;
    for(int i=1; i<6; i++){
        ar[i]=n%10;
        n/=10;
        if(ar[i]!=0){
            sz++;
        }
    }
    cout << sz << endl;
    for(int i=1; i<6; i++){
        if(ar[i]!=0){
            cout << ar[i]*m << " ";
        }
        m=m*10;
    }
    cout << endl;
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    

    return 0;


// Alhamdulillah
}