#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    //meet the condition
    if(n>9 || n<0){
        return 0;
    }
    //meet the condition

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d", i+1);
        }
        printf("\n");
    }
    return 0;
}