/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-08 || 23:45:46
 * * * * File    : A_cAPS_lOCK.cpp
 */



// https://codeforces.com/problemset/problem/131/A



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
    string s; cin >> s;
    int n=s.length();
    bool isCheck=true;

    for(int i=1; i<n; i++){
        if(s[i]>=97){
            isCheck=false;
            break;
        }
    }


    if(isCheck){
        for(int i=0; i<n; i++){
            if(s[i]>=97){
                s[i]=s[i]-32;
            }else{
                s[i]=s[i]+32;
            }
        }
        cout << s;
    }
    else{
        cout << s;
    }




    return 0;


// Alhamdulillah
}