//https://codeforces.com/problemset/problem/339/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>> s;
    int n=s.length();
    for(int i=0; i<n; i+=2){
        for(int j=0; j<n-1; j+=2){
            if(s[j]>s[j+2]){
                swap(s[j],s[j+2]);
            }
        }
    }
    cout<< s <<endl;
    return 0;
}