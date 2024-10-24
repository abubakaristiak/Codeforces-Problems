//https://codeforces.com/problemset/problem/116/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    int sum=0, k=0;
    while (t--)
    {
        int a,b; cin >> a >> b;
        sum=(a+k)-b;
        if(sum<0){
            k=0;
        }
        else k=sum;
    }
    cout << sum << endl;
    
    return 0;
}