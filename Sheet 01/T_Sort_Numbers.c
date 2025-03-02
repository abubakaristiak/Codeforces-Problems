//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
#include<stdio.h>
int main()
{
    int a, b,c;
    scanf("%d %d %d", &a, &b, &c);
    int ar[3] = {a,b,c};
    int br[3] = {a,b,c};
    
    for(int i = 0; i<3; i++){
        for(int j=i+1; j<3; j++){
            if(ar[i]<ar[j]){
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    
    
    for(int i = 0; i<3; i++){
        for(int j=i+1; j<3; j++){
            if(ar[i]>ar[j]){
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    
    for(int i=0; i<3; i++){
        printf("%d\n", ar[i]);
    }
    printf("\n");
    for(int i=0; i<3; i++){
        printf("%d\n", br[i]);
    }
    return 0;
}