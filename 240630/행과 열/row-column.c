#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);


    //meet the condition
    if(a<1 || a>10 || b<1 || b>10){
        return 0;
    }
    //meet the condition

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            printf("%d ", (j+1)*(i+1));
        }
        printf("\n");
    }
    return 0;
}