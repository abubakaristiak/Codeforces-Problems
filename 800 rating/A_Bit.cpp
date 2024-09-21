#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    string oper;
    int x=0;
    
    while (t--)
    {
        cin >> oper;
        if(oper == "X++" || oper == "++X"){
            x = x+1;
        }
        else x--;
        
    }
    cout << x << endl;
    
    return 0;
}