/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-12 || 16:40:11
 * * * * File    : A_Is_your_horseshoe_on_the_other_hoof.cpp
 */

// https://codeforces.com/problemset/problem/228/A


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
    int a,b,c,d; cin >> a >> b >> c >> d;
    set<int> st;
    st.insert(a);
    st.insert(b);
    st.insert(c);
    st.insert(d);

    int ans = 4-st.size();
    cout << ans << endl;
    return 0;
}