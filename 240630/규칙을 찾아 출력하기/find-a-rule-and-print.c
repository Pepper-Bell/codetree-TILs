#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    //meet the condition
    if(n>10 && n<0){
        return 0;
    }
    //meet the condition

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            printf("* ");
        }
        for(int k=i; k<n; k++){
            if(i==0 || k==n-1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}