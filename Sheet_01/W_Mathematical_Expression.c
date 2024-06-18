//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
#include<stdio.h>
int main()
{
    int a,b,c;
    char o;
    scanf("%d %c %d = %d", &a, &o, &b, &c);
    if(o=='+'){
        if(a+b == c){
            printf("Yes\n");
        }
        else{
            printf("%d\n",a+b);
        }
    }

    if(o=='-'){
        if(a-b == c){
            printf("Yes\n");
        }
        else{
            printf("%d\n",a-b);
        }
    }

    if(o=='*'){
        if(a*b == c){
            printf("Yes\n");
        }
        else{
            printf("%d\n",a*b);
        }
    }
    
    return 0;
}
