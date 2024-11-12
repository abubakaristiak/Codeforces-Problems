/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-12 || 09:55:16
 * * * * File    : A_Pangram.cpp
 */

// https://codeforces.com/problemset/problem/520/A


#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
int main()
{
    fast();
    int n; cin >> n;
    string s; cin >> s;
    set<char> st;
    for(int i=0; i<n; i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
        st.insert(s[i]);
    }
    if(st.size()==26) yes;
    else no;
    
    return 0;
}