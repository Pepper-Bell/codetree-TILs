#include <stdio.h>

int main() {
    int input[10], sum=0, check = 0, max = 10;

    for(int i=0; i<max; i++){
        scanf("%d ", &input[i]);
        if(input[i]>=250){
            break;
        }else{
            sum += input[i];
            check ++;
        }
    }
    printf("%d %.1f", sum, (double)sum/check);
    return 0;
}