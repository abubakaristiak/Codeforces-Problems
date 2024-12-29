/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-29 || 23:34:45
 * * * * File    : A_Expression.cpp
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
int main()
{
    fast();
    int a,b,c; cin >> a >> b >> c;

    int ans1 = a+b*c;
    int ans2 = a*(b+c);
    int ans3 = a*b*c;
    int ans4 = (a+b)*c;
    int ans5 = a+b+c;
    int ans6 = a*b+c;

    vector<int> v={ans1, ans2, ans3, ans4, ans5, ans6};
    rsort(v);
    cout << v[0] << endl;
    return 0;


// Alhamdulillah
}



