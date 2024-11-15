/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-15 || 18:06:21
 * * * * File    : A_HQ_9.cpp
 */

// https://codeforces.com/problemset/problem/133/A

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
    string s; cin >> s;
    int n=s.size();

    bool flag=false;
    for(int i=0; i<n; i++){
        if(s[i]=='H'){
            flag=true;
        }else if(s[i]=='Q'){
            flag=true;
        }else if(s[i]=='9'){
            flag=true;
        }
    }
    if(flag) yes;
    else no;
    return 0;
}