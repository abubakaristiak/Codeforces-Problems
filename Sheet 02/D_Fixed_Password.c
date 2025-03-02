//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D
#include<stdio.h>
int main()
{
    int a;
    int correct_pass = 1999;
    int i=0; 
    while (-1)
    {
        scanf("%d\n", &a);
        if(a == correct_pass){
            printf("Correct\n");
            break;
        }
        printf("Wrong\n");
    }
    
    return 0;
}