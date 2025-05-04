/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-05-04 || 22:56:13
 * * * * File    : B_Balanced_Array.cpp
*/

// https://codeforces.com/problemset/problem/1343/B

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
    vector<int> res;
    int sum1=0, sum2=0;
    if(n%2==0){
        if(n%4==0){
            yes;
            res.push_back(2);
            for(int i=1; i<=n; i++){
                if(i%2==0){
                    res.push_back(i);
                }
            }
            for(int i=1; i<=n; i++){
                if(i%2!=0){
                    res.push_back(i);
                    sum1+=i;
                }
            }
            for(int i=1; i<=res.size()/2; i++){
                sum2+=res[i];
            }
            int dif=sum2-sum1;
            int last=res.back();
            res.back()=last+dif;
            for(int i=1; i<=n; i++){
                cout << res[i] << " ";
            }
            cout << endl;
        }else{
            no;
        }
    }else{
        no;
    }
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