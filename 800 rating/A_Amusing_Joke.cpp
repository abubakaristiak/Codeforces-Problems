/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-14 || 22:52:38
 * * * * File    : A_Amusing_Joke.cpp
 */



// https://codeforces.com/problemset/problem/141/A



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
    string s1, s2, s3; cin >> s1 >> s2 >> s3;
    string res=s1+s2;
    asort(res);
    asort(s3);
    if(s3==res){
        yes;
    }else no;
    return 0;


// Alhamdulillah
}