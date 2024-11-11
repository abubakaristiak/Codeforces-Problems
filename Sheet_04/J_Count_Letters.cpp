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
    string s; cin >> s;
    map<char,int> mp;
    for(int i=0; i<s.length(); i++){
        mp[s[i]]++;
    }
    for(auto it:mp){
        cout << it.first <<" : "<<it.second << endl;
    }
    return 0;
}