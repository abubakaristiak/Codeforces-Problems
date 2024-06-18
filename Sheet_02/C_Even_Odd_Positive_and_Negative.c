//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }

    int even_count = 0;
    int odd_count = 0;
    int pos_count = 0;
    int neg_count = 0;
    
    for(int i=0; i<n; i++){
        if(ar[i]%2 ==0){
            even_count++;
        }

        if(ar[i]%2 !=0){
            odd_count++;
        }

        if(ar[i]>0){
            pos_count++;
        }

        if(ar[i]<0){
            neg_count++;
        }

    }

    printf("Even: %d\n",even_count);
    printf("Odd: %d\n",odd_count);
    printf("Positive: %d\n",pos_count);
    printf("Negative: %d\n",neg_count);

    

    return 0;
}

// another way shortcut:
// #include <stdio.h>

// int main() {
//     int n, a;
//     scanf("%d", &n);

//     int even_count = 0;
//     int odd_count = 0;
//     int pos_count = 0;
//     int neg_count = 0;

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a);

//         if (a % 2 == 0) {
//             even_count++;
//         } else {
//             odd_count++;
//         }

//         if (a > 0) {
//             pos_count++;
//         } else if (a < 0) {
//             neg_count++;
//         }
//     }

//     printf("Even: %d\n", even_count);
//     printf("Odd: %d\n", odd_count);
//     printf("Positive: %d\n", pos_count);
//     printf("Negative: %d\n", neg_count);

//     return 0;
// }
