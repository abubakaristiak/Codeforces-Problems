//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O
#include<stdio.h>
int main()
{
    int a,b;
    char o;
    scanf("%d%c%d", &a, &o, &b);
    // printf("%d%c%d", a,o,b);
    if(o=='+'){
        printf("%d", a+b);
    }

    else if(o=='-'){
        printf("%d", a-b);
    }

    else if(o=='*'){
        printf("%d", a*b);
    }

    else if(o=='/'){
        printf("%d", a/b);
    }
    return 0;
}