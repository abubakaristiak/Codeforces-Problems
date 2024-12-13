/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-12 || 23:40:36
 * * * * File    : A_Choosing_Teams.cpp
 */


// https://codeforces.com/problemset/problem/432/A



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
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int cnt=0;
    for(int i=0; i<n; i++){
        if(v[i]<5){
            if(5-v[i]>=k){
                cnt++;
            }
        }
    }
    if(cnt>=3){
        cout << cnt/3 << endl;
    }else cout << 0 << endl;
    
    return 0;


// Alhamdulillah
}