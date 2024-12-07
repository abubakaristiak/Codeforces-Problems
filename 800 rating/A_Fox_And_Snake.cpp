/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-22 || 19:46:33
 * * * * File    : A_Fox_And_Snake.cpp
 */


// https://codeforces.com/problemset/problem/510/A

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
    int n, m; cin >> n >> m;
    for(int i=1; i<=n; i++){
        if(i%2==1){
            for(int j=0; j<m; j++){
                cout << '#';
            }
        }else{
            if(i%4==0){
                cout << '#';
                for(int j=1; j<m; j++){
                    cout << '.';
                }
            }else{
                for(int j=0; j<m-1; j++){
                    cout << '.';
                }
                cout << '#';
            }
        }
        cout << endl;
    }
    return 0;


// Alhamdulillah
}



