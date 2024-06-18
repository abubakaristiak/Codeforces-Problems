//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I
#include<bits/stdc++.h>
using namespace std;
int fun(string s, int i){
    if(s[i]=='\0'){
        return 0;
    }
    int ans = fun(s,i+1);
    if(s[i]>='A' && s[i]<='Z'){
        s[i] = s[i]+32;
    }
    if(s[i]=='a'||s[i]=='e'|| s[i]=='o'|| s[i]=='u' || s[i]=='i'){
        return ans+1;
    }
    else{
        return ans;
    }
}
int main()
{
    string s;
    getline(cin,s);
    int count = fun(s,0);
    cout << count << endl;
    return 0;
}