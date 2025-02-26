    /*
    * Bismillahir Rahmanir Raheem
    *
    * * * * Coder   : abubakaristiak
    * * * * Created : 2025-02-26 || 23:45:17
    * * * * File    : Nearest_Exit.cpp
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
        if(n<=50){
            cout << "LEFT" << endl;
        }else{
            cout << "RIGHT" << endl;
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