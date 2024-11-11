/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-11 || 20:47:32
 * * * * File    : A_Lucky_Division.cpp
 */

// https://codeforces.com/problemset/problem/122/A

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
    vector<int> lk_nums={4, 7, 47, 74, 447, 474, 477, 744, 747, 774};
    bool flag=false;
    for(auto lk:lk_nums){
        if(n%lk==0){
            flag=true;
            break;
        }
    }
    if(flag) yes;
    else no;
    
    return 0;
}