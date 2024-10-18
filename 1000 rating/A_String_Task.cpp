//https://codeforces.com/problemset/problem/118/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s,result; 
    cin>>s;
    int n=s.length();
    for(int i=0; i<n; i++){
        if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i' || 
           s[i]=='A' || s[i]=='O' || s[i]=='Y' || s[i]=='E' || s[i]=='U' || s[i]=='I'){
            continue;
        }
        else{
            result += '.';
            result += tolower(s[i]);
        }
    }
    cout << result << endl;
    return 0;
}