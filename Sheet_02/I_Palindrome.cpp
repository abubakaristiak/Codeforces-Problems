//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; 
    cin >> s;

    string r_string = s;
    reverse(r_string.begin(), r_string.end());
    r_string.erase(0,r_string.find_first_not_of('0'));

    cout << r_string <<endl;

    if(s==r_string){
        cout << "YES"<<endl;
    }
    else{
        cout << "NO" <<endl;
    }
    
    return 0;
}











// NOT correct 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s; 
//     cin >> s;
//     int n = s.length();
//     int flag = 0;
//     for(int i=0; i<n/2; i++){
//         if(s[i] != s[n-i-1]){
//             flag = 1;
//             break;
//         }
//     }
//     cout << s <<endl;
//     if(flag==0){
//         cout << "YES"<<endl;
//     }
//     else{
//         cout << "NO"<<endl;
//     }
//     return 0;
// }