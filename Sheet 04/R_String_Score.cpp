/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-01 || 15:59:50
 * * * * File    : R_String_Score.cpp
*/



#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int score=0;
    for(int i=0; i<s.size(); i++){
        switch (s[i])
        {
        case 'V':
            score+=5;
            break;
        case 'W':
            score+=2;
            break;
        case 'X':
            if(i!=s.size()-1){
                i++;
            }
            break;
        case 'Y':
            if(i!=s.size()-1){
                s.push_back(s[i+1]);
                i++;
            }
            break;
        case 'Z':
            if(i!=s.size()-1){
                if(s[i+1]=='V'){
                    score/=5;
                    i++;
                }else if(s[i+1]=='W'){
                    score/=2;
                    i++;
                }
            }
            break;  
        }
    }
    cout << score << endl;

}


int main()
{
    fast();
    int t=1;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}