#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    //meet the condition
    if(n<0 || n>10){
        return 0;
    }
    //meet the condition

    for(int i=n; i>0; i--){
        for(int j=n; j>0; j--){
            printf("(%d,%d) ", i, j);
        }
        printf("\n");
    }
    return 0;
}