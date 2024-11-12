/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-12 || 16:58:36
 * * * * File    : A_Hulk.cpp
 */


// https://codeforces.com/problemset/problem/705/A


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
    for(int i=1; i<=n; i++){
        if(i==1){
            cout << "I hate";
        } else if(i%2==0){
            cout << " that I love";
        } else{
            cout << " that I hate";
        }
    }

    cout << " it" << endl;
    return 0;
}