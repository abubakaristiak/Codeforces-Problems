/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-28 || 00:24:46
 * * * * File    : A_Vanya_and_Cubes.cpp
 */



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

int sum(int n){
    return (n*(n+1))/2;
}
void solve()
{
    int n; cin >> n;
    int level=0;
    while (true)
    {
        n-=sum(level+1);
        if(n>=0){
            level++;
        }else break;
    }
    cout << level << endl;
    
}


int main()
{
    fast();
    solve();

    return 0;


// Alhamdulillah
}