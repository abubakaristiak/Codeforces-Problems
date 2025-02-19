/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-19 || 23:48:33
 * * * * File    : C_Clock_Conversion.cpp
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
    string s; cin >> s;
    string a=s.substr(0,2);
    string b=s.substr(3,5);

    if(a=="00"){
        cout << 12 << ":" << b << " AM" << endl;
        return;
    }
    if(a=="12"){
        cout << s << " PM" << endl;
        return;
    }

    int v1=stoi(a);
    if(v1<12){
        cout << s << " AM" << endl;
        return;
    }
    int v2=v1-12;
    if(v2<10){
        cout << "0" << v2 << ":" << b << " PM" << endl;
    }else{
        cout << v2 << ":" << b << " PM" << endl;
    }

    

}


int main()
{
    fast();
    int t; cin  >> t;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}