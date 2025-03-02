//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; cin >> a>>b;
    int size = a+b+1;
    string s; cin>>s;
    
    if(s.size() != size){
        cout <<"No"<<endl;
        return 0;
    }

    if(s[a] != '-'){
        cout <<"No"<<endl;
        return 0;
    }

    for(int i=0; i<size; i++){
        if(i==a) continue;
        if(!isdigit(s[i])){
            cout<< "No"<<endl;
            return 0;
        }
    }
    cout << "Yes"<<endl;
    return 0;
}