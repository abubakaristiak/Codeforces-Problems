/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-12 || 01:08:28
 * * * * File    : A_Ultra_Fast_Mathematician.cpp
 */

// https://codeforces.com/problemset/problem/61/A


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
    string a,b;
    cin >> a >> b;
    string res="";
    for(int i=0; i<a.size(); i++){
        if(a[i]=='1' && b[i]=='0'){
            res.push_back('1');
        }
        else if(a[i]=='0' && b[i]=='1'){
            res.push_back('1');
        }
        else if(a[i]=='1' && b[i]=='1'){
            res.push_back('0');
        }
        else if(a[i]=='0' && b[i]=='0'){
            res.push_back('0');
        }
        
    }
    cout << res << endl;
    return 0;
}