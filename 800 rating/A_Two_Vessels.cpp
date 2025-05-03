/*
* Bismillahir Rahmanir Raheem
*
* * * * Coder   : abubakaristiak
* * * * Created : 2025-05-03 || 23:20:27
* * * * File    : A_Two_Vessels.cpp
*/

// https://codeforces.com/contest/1872/problem/A

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int a,b,c; cin >> a >> b >> c;
    int dif=abs(a-b);
    if(dif==0){
        cout << 0 << endl;
        return;
    }
    int res=(dif+(2*c)-1) / (2*c);
    cout << res << endl;
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}