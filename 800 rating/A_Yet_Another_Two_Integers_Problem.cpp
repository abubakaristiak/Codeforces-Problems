/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-08 || 00:14:24
 * * * * File    : A_Yet_Another_Two_Integers_Problem.cpp
 */

 
// https://codeforces.com/problemset/problem/1409/A


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
 
 
 void solve()
 {
     int a,b; cin >> a >> b;
     if(a==b){
        cout << 0 << endl;
     }else{
        if(abs(a-b)%10==0){
            cout << abs(a-b)/10 << endl;
        }else{
            cout << (abs(a-b)/10)+1 << endl;
        }
     }
 }
 
 
 int main()
 {
     fast();
     int t; cin >> t;
     while (t--) {
         solve();
     }
 
     return 0;
 
 
 // Alhamdulillah
 }