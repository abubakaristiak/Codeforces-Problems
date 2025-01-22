/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-22 || 22:48:58
 * * * * File    : A_Anton_and_Polyhedrons.cpp
 */


// https://codeforces.com/problemset/problem/785/A



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

vector<int> res;
void solve()
{
    string s; cin >> s;
    if(s=="Tetrahedron"){
        res.push_back(4);
    }else if(s=="Cube"){
        res.push_back(6);
    }else if(s=="Octahedron"){
        res.push_back(8);
    }else if(s=="Dodecahedron"){
        res.push_back(12);
    }else if(s=="Icosahedron"){
        res.push_back(20);
    }
}


int main()
{
    fast();
    int t; cin >> t;
    
    while (t--)
    {
        solve();
    }
    int sum=0; 
    for(int val:res){
        sum+=val;
    }
    cout << sum << endl;
    

    return 0;


// Alhamdulillah
}