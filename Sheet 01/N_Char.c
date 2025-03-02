//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if(a>='A' && a<='Z'){
        printf("%c", a+32);
    }

    else if(a>='a' && a<='z'){
        printf("%c",a-32);
    }
    return 0;
}