/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-28 || 18:25:05
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
    int n; cin >> n;
    string s; cin >> s;
    deque<char> q(s.begin(), s.end());
    int score=0;
    int i=0;

    while (i<q.size())
    {
        char ch=q[i];
        if(ch=='V'){
            score+=5;
        }
        else if(ch=='W'){
            score+=2;
        }
        else if(ch=='X'){
            if(i+1<q.size()){
                q.erase(q.begin()+i+1);
            }
        }
        else if(ch=='Y'){
            if(i+1<q.size()){
                char nxChar=q[i+1];
                q.erase(q.begin()+i+1);
                q.push_back(nxChar);
            }
        }
        else if(ch=='Z'){
            if(i+1<q.size()){
                if(q[i+1]=='V'){
                    score/=5;
                    q.erase(q.begin()+i+1);
                }else if(q[i+1]=='W'){
                    score/=2;
                    q.erase(q.begin()+i+1);
                }
            }
        }
        i++;
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