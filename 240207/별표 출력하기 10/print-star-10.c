#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int temp1=n, temp2=1;

    for(int i=1; i<=n; i++){
        if(i%2==1){
            for(int j=0; j<temp2; j++){
                printf("* ");
            }
            temp2++;
        }else{
            for(int j=0; j<temp1; j++){
                printf("* ");
            }
            temp1--;
        }
        printf("\n");
    }

    temp1++;
    temp2--;

    if(n%2==0){
        for(int i=1; i<=n; i++){
        if(i%2==0){
            for(int j=0; j<temp2; j++){
                printf("* ");
            }
            temp2--;
        }else{
            for(int j=0; j<temp1; j++){
                printf("* ");
            }
            temp1++;
        }
        printf("\n");
    }
    }else{
        for(int i=1; i<=n; i++){
        if(i%2==1){
            for(int j=0; j<temp2; j++){
                printf("* ");
            }
            temp2--;
        }else{
            for(int j=0; j<temp1; j++){
                printf("* ");
            }
            temp1++;
        }
        printf("\n");
    }
    }
    return 0;
}