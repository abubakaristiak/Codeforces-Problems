#include<stdio.h>
int main()
{
    int l1, r1, l2, r2;
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
    int max = l1;
    int min = r1;
    if(l2>l1){
        max = l2;
    }

    if(r2<r1){
        min = r2;
    }

    if(max<=min){
        printf("%d %d", max, min);
    }
    else{
        printf("-1");
    }
    return 0;
}