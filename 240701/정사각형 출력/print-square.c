#include <stdio.h>

int main() {
    int n;
    int cnt = 1;
    scanf("%d", &n);

    //meet the condition
    if(n<1 || n>100){
        return 0;
    }
    //meet the condition

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", cnt);
            cnt++;
        }
        printf("\n");
    }
    return 0;
}