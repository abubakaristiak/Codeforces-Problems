//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n<2){
        printf("-1\n");
        
    }
    else{
        for(int i=2; i<=n; i+=2){
            printf("%d\n",i);
        }
    }
    
    return 0;
}