/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-23 || 21:00:11
 * * * * File    : M_Lucky_Numbers.cpp
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
    int a,b; cin >> a >> b;
    bool ok=false;
    for(int i=a; i<=b; i++){
        int val=i;
        bool lucky=true;
        while (val>0)
        {
            int digit=val%10;
            if(digit!=4 && digit!=7){
                lucky=false;
                break;
            }
            val/=10;
        }
        if(lucky){
            cout << i << " ";
            ok=true;
        }
    }
    if(!ok){
        cout << -1 << endl;
    }
}


int main()
{
    fast();
    int t=1;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}