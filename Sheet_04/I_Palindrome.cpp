//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int flag = 0; 
    int i=0;
    int len = s.length();
    int j=len-1;
    while (i<j)
    {
        if(s[i]!=s[j]){
            flag = 1;
        }
        i++;
        j--;
    }
    if(flag==0){
        cout <<"YES" << endl;
    }
    else{
        cout <<"NO" << endl;
    }
    return 0;
}