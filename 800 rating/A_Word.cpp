//https://codeforces.com/problemset/problem/59/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s; cin >> s;
    int up=0, low=0;
    int n=s.length();
    for(int i=0; i<n; i++){
        if(isupper(s[i])) up++;
        else low++;
    }

    if(up<low){
        for(int i=0; i<n; i++){
            s[i]=towlower(s[i]);
        }
        cout << s << endl;
    }
    if(up>low){
        for(int i=0; i<n; i++){
            s[i]=toupper(s[i]);
        }
        cout << s << endl;
    }
    if(up==low){
        for(int i=0; i<n; i++){
            s[i]=towlower(s[i]);
        }
        cout << s << endl;
    }
    return 0;
}






// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     string s; cin>> s;
//     int n=s.length();
//     int lowerCnt=0;
//     int uppperCnt=0;
//     for(int i=0; i<n; i++){
//         if(s[i]>='A' && s[i]<='Z') uppperCnt++;
//         else if(s[i]>='a' && s[i]<='z') lowerCnt++;
//     }

//     for(int i=0; i<n; i++){
//         if(lowerCnt>=uppperCnt){
//             if(s[i]>='A' && s[i]<='Z'){
//                 s[i] = s[i]+32;
//             }
//         }
//         else if(uppperCnt > lowerCnt){
//             if(s[i]>='a' && s[i]<='z'){
//                 s[i]=s[i]-32;
//             }
//         }
        
//     }
//     cout << s << endl;
//     return 0;
// }

