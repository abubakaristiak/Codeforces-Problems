//https://codeforces.com/problemset/problem/546/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k,n,w;
    cin>>k>>n>>w;

    int sum=0;
    for(int i=1; i<=w; i++){
        sum += i;
    }
    int result = (sum*k)-n;
    if(result<0) cout << 0 << endl;
    else cout << result;
    return 0;
}