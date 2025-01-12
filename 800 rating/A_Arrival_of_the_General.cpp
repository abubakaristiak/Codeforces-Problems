/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-12 || 22:36:42
 * * * * File    : A_Arrival_of_the_General.cpp
 */


// https://codeforces.com/contest/144/problem/A



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
void solve(int n){
    vector<int> v(n);
    int mx=0, mn=101, mxidx, mnidx;
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i]>mx){
            mx=v[i];
            mxidx=i;
        }
        if(v[i]<=mn){
            mn=v[i];
            mnidx=i;
        }
    }
    int res = mxidx+(n-1-mnidx);
    if(mxidx > mnidx){
        res--;
    }
    cout << res << endl;

}
int main()
{
    fast();
    int n; cin >> n;
    solve(n);
    return 0;


// Alhamdulillah
}