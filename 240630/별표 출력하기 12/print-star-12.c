#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    //meet the condition
    if (n>15 || n<0){
        return 0;
    }
    //meet the condition

    for(int i=0; i<n; i++){
        for (int k=0; k<i; k++){
            printf("  ");
        }
        for(int j=i; j<n; j++){
            if(i==0){
                printf("* ");
            }else if(j%2==1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}