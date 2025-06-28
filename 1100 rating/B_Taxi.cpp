/*
||-----------------------------------||
||        Abu Bakar Istiak           ||
||     Chattogram Polytechnic        ||
||        Department of CST          ||
||    abubakar119147@gmail.com       ||
||-----------------------------------||
*/

// https://codeforces.com/problemset/problem/158/B

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ull unsigned long long
#define pi pair<ll, ll>
#define vi vector<ll>
#define vpi vector<pi>
#define pb push_back
#define endl "\n"
#define sp " "
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define sz(x) (ll)(x).size()
#define minus cout << -1 << endl
#define zero cout << 0 << endl
#define MAX 100000
#define MOD 998244353
#define afor(i,a,b) for (ll i = (a); i < (b); ++i)
#define rfor(i,a,b) for (ll i = (a); i >= (b); --i)
#define asort(v) sort((v).begin(), (v).end())
#define rsort(v) sort((v).begin(), (v).end(), greater<>())
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    ll n; cin >> n;
    vector<ll> v(n);
    ll cnt1=0, cnt2=0, cnt3=0, cnt4=0, cnt=0;
    for(ll i=0; i<n; i++){
        cin >> v[i];
        if(v[i]==4){
            cnt4+=1;
        }
        else if(v[i]==3){
            cnt3+=1;
        }
        else if(v[i]==2){
            cnt2+=2;
        }else{
            cnt1+=1;
        }
    }
    cnt+=cnt4;
    cnt+=cnt3;
    cnt+=cnt2/4;
    ll rem=cnt2%4;

    if(cnt3<cnt1){
        rem+=(cnt1-cnt3);
    }
    cnt+=rem/4;
    rem=rem%4;
    if(rem>=1){
        cnt+=1;
    }
    cout << cnt <<endl;
}


/*
void solve() {
    ll n; cin >> n;
    vector<ll> v(n);
    ll cnt1=0, cnt2=0, cnt3=0, cnt4=0, cnt=0;
    for(ll i=0; i<n; i++){
        cin >> v[i];
        if(v[i]==4){
            cnt4++;
        }
        else if(v[i]==3){
            cnt3++;
        }
        else if(v[i]==2){
            cnt2++;
        }else{
            cnt1++;
        }
    }
    cnt+=cnt4;

    ll mn=min(cnt3, cnt1);
    cnt+=mn;
    cnt3-=mn;
    cnt1-=mn;

    cnt+=cnt3;
    cnt+=cnt2/2;
    cnt2=cnt2%2;

    if(cnt2==1){
        cnt+=1;
        cnt1-=min(2LL, cnt1);
    }

    if(cnt1>0){
        cnt+=(cnt1+3)/4;
    }
    cout << cnt << endl;

}*/


int main() {
    fast();
    ll t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;

    // Alhamdulillah
}