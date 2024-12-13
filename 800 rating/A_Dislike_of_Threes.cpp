/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-13 || 14:56:29
 * * * * File    : A_Dislike_of_Threes.cpp
 */


// https://codeforces.com/problemset/problem/1560/A



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
    int N=1e6;
    vector<ll> v;
    for(int i=1; i<=N; i++){
        if(i%3==0 || i%10==3){
            continue;
        }else v.push_back(i);
    }

    int t; cin >> t; 
    while (t--)
    {
        int x; cin >> x;
        cout << v[x-1] << endl;

    }
    
    return 0;


// Alhamdulillah
}