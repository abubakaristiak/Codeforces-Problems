//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
#include<stdio.h>
#include<string.h>
int main()
{

    char a[100],b[100];
    char c[100],d[100];
    scanf("%s %s", a,b);
    scanf("%s %s", c,d);

    int value = strcmp(b,d);
    if(value == 0){
        printf("ARE Brothers");
    }
    else{
        printf("NOT");
    }
    return 0;
}