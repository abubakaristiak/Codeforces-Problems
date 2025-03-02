/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-28 || 16:01:45
 * * * * File    : L_String_Functions.cpp
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
    int s_len; cin >> s_len;
    int q; cin >> q;
    string s; cin >> s;
    while (q--)
    {
        string qurry; cin >> qurry;
        if(qurry=="pop_back"){
            s.pop_back();
        }
        else if(qurry=="front"){
            cout << s.front() << endl;
        }
        else if(qurry=="back"){
            cout << s.back() << endl;
        }
        else if(qurry=="sort"){
            int l,r; cin >> l >> r;
            sort(&s[min(l,r)-1], &s[max(l,r)]);
        }
        else if(qurry=="reverse"){
            int l,r; cin >> l >> r;
            reverse(&s[min(l,r)-1], &s[max(l,r)]);
        }
        else if(qurry=="print"){
            int pos; cin >> pos;
            cout << s[pos-1] << endl;
        }
        else if(qurry=="substr"){
            int l,r; cin >> l >> r;
            for(int i=min(l,r)-1; i<max(l,r); i++){
                cout << s[i];
            }
            cout << endl;
        }
        else if(qurry=="push_back"){
            char ch; cin >> ch;
            s.push_back(ch);
        }
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