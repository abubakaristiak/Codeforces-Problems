//https://codeforces.com/problemset/problem/231/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int cnt=0;
    
    while (t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(a==1 && b==1){
            cnt++;
        }
        else if(a==1 && c==1){
            cnt++;
        }
        else if(b==1 && c==1){
            cnt++;
        }
        
    }
    cout << cnt << endl;
    
    return 0;
}