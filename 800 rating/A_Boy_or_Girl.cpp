//https://codeforces.com/problemset/problem/236/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>> s;
    set<char>st;
    int n=s.length();
    for(int i=0; i<n; i++){
        st.insert(s[i]);
    }
    int sz=st.size();
    if(sz%2==0){
        cout << "CHAT WITH HER!" << endl;
    }
    else cout << "IGNORE HIM!" << endl;
    return 0;
}