//https://codeforces.com/problemset/problem/791/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b;
    cin >> a >> b;
    int i=1;
    while (true)
    {
        a*=3;
        b*=2;

        if(a>b){
            break;
        }
        i++;
    }
    cout << i << endl;
    
    return 0;
}