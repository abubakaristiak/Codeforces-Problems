//https://codeforces.com/problemset/problem/271/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a; cin >> a; 
    while(true){
        a++;
        int b=a/1000;
        int c=(a/100)%10;
        int d=(a/10)%10;
        int e=(a%10);

        if(b!=c && b!=d && b!=e && c!=d && c!=e && d!=e){
            break;
        }
    }
    cout << a << endl;


    return 0;
}