//https://codeforces.com/problemset/problem/96/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s; cin >> s;
    int cnt1=0, cnt0=0, totalCnt=0;
    int n=s.length();

    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            cnt1++;
            cnt0=0;
        }
        else{
            cnt0++;
            cnt1=0;
        }
        if(cnt1==7 || cnt0==7){
            totalCnt=1;
        }
    }
    if(totalCnt==1) cout << "YES" << endl;
    else cout<< "NO" << endl;
    return 0;
}