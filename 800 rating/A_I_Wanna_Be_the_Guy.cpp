/*
* Bismillahir Rahmanir Raheem
*
* * * * Coder   : abubakaristiak
* * * * Created : 2024-11-17 || 00:56:53
* * * * File    : A_I_Wanna_Be_the_Guy.cpp
*/

// https://codeforces.com/problemset/problem/469/A


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
    int n; cin>> n;
    set<int> st;

    int p; cin >> p;
    for(int i=0; i<p; i++){
        int x; cin >> x;
        st.insert(x);
    }

    int q; cin >> q;
    for(int i=0; i<q; i++){
        int x; cin >> x;
        st.insert(x);
    }

    if(st.size()==n){
        cout << "I become the guy." << endl;
    }
    else{
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;


// Alhamdulillah
}