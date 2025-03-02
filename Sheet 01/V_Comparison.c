//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
#include<stdio.h>
int main()
{
    int a,b;
    char o;
    scanf("%d %c %d", &a,&o,&b);
    if(o=='>'){
        if(a>b){
            printf("Right");
        }
        else{
            printf("Wrong");
        }
    }
    else if(o=='<'){
        if(a<b){
            printf("Right");
        }
        else{
            printf("Wrong");
        }
    }
    else if(o=='='){
        if(a==b){
            printf("Right");
        }
        else{
            printf("Wrong");
        }
    }
    return 0;
}