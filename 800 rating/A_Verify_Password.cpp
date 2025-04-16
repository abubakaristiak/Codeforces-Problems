#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        int n, f = 1; cin>>n;
        string s; cin>>s;
        for(int i =0; i<n-1; i++)
        {
            if(s[i]>s[i+1]){
                f = 0;
                break;
            }
            if(s[i]>= 'A' && s[i]<='Z' ||s[i+1]>= 'A' && s[i+1]<='Z' ){
                f = 0;
                break;
            }
        }
        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}