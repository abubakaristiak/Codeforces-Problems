/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-10 || 23:36:10
 * * * * File    : A_Insomnia_cure.cpp
 */



// https://codeforces.com/problemset/problem/148/A



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
    int k,l,m,n,d; cin >> k >> l >> m >> n >> d;
    int cnt=0;
    for(int i=1; i<=d; i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;


// Alhamdulillah
}