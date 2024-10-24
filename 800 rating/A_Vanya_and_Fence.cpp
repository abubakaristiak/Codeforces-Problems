//https://codeforces.com/problemset/problem/677/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,h, p;
    cin>>n >> h;
    int width=0;
    for(int i=0; i<n; i++){
        cin>>p;
        if(p<=h){
            width++;
        }
        else if(p>h){
            width+=2;
        }
    }
    cout << width << endl;
    return 0;
}