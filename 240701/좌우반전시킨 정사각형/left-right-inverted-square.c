#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    //meet the condition
    if(n<1 || n>9){
        return 0;
    }
    //meet the condition

    for(int i=0; i<n; i++){
        for(int j=n; j>0; j--){
            printf("%d ", j*(i+1));
        }
        printf("\n");
    }
    return 0;
}