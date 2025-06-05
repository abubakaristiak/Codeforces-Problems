/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-06-05 || 23:34:45
 * * * * File    : B_Sum_of_Two_Numbers.cpp
*//*
||-----------------------------------||
||        Abu Bakar Istiak           ||
||     Chattogram Polytechnic        ||
||        Department of CST          ||
||    abubakar119147@gmail.com       ||
||-----------------------------------||
*/

// https://codeforces.com/contest/1788/problem/B

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ull unsigned long long
#define pi pair<ll, ll>
#define vi vector<ll>
#define vpi vector<pi>
#define pb push_back
#define endl "\n"
#define sp " "
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define sz(x) (ll)(x).size()
#define minus cout << -1 << endl
#define zero cout << 0 << endl
#define MAX 100000
#define MOD 998244353
#define afor(i,a,b) for (ll i = (a); i < (b); ++i)
#define rfor(i,a,b) for (ll i = (a); i >= (b); --i)
#define asort(v) sort((v).begin(), (v).end())
#define rsort(v) sort((v).begin(), (v).end(), greater<>())
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    ll n; cin >> n;
    ll digits[10];
    ll k=0;
    while (n)
    {
        digits[k]=n%10;
        n/=10;
        k++;
    }

    vector<ll>x,y;
    ll c=0;
    for(int i=0; i<k; i++){
        if(digits[i]%2!=0){
            x.pb(digits[i]/2+c);
            y.pb(digits[i]/2+1-c);
            c=1-c;
        }else{
            x.pb(digits[i]/2);
            y.pb(digits[i]/2);
        }
    }
    ll res1=0, res2=0, p=1;
    for(int i=0; i<k; i++){
        res1+=x[i]*p;
        res2+=y[i]*p;
        p*=10;
    }
    cout << res1 << " " << res2 << endl;

    
}


int main() {
    fast();
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;

    // Alhamdulillah
}