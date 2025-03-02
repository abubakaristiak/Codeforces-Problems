/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-23 || 23:13:36
 * * * * File    : J_Primes_from_1_to_n.cpp
*/



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
    int n; cin >> n;
    vector<bool> isPrime(n+1, true);

    for(int i=2; i*i<=n; i++){
        for(int j=i+1; j<n; j++){
            isPrime[j]=false;
        }
    }

    for(int i=2; i<=n; i++){
        if(isPrime[i]){
            cout << i << " ";
        }
    }
}

int main()
{
    fast();
    int t; cin >> 
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}