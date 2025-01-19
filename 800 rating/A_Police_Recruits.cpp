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
    int n; cin >> n;
    int police=0, crime=0;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        if(x>0){
            police+=x;
        }else{
            if(police<1){
                crime++;
            }else{
                police--;
            }
        }
    }
    cout << crime << endl;
}


int main()
{
    fast();
    solve();

    return 0;


// Alhamdulillah
}