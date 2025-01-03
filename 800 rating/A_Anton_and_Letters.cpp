/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-03 || 19:54:25
 * * * * File    : A_Anton_and_Letters.cpp
 */


// https://codeforces.com/problemset/problem/443/A



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
int main()
{
    fast();
    string s;
    getline(cin, s);

    set<char> st;
    int n=s.size();

    for(int i=0; i<n; i++){
        if(s[i]>='a' && s[i]<='z'){
            st.insert(s[i]);
        }
    }
    cout << st.size() << endl;

    
    return 0;


// Alhamdulillah
}