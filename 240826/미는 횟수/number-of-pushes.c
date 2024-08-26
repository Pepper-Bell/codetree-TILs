#include <stdio.h>
#include <string.h>

int main() {

    char A[101]="", B[101]="", tmp;
    int cnt=0;

    scanf("%s %s", A, B);
    int len = strlen(A);
    
    for(int i=0; i<len; i++){
        if(strcmp(A, B)==0){
            break;
        }
        tmp = A[len-1];
        for(int j=len-1; j>0; j--){
            A[j]=A[j-1];
        }
        A[0]=tmp;
        cnt++;
    }

    printf("%d", cnt);

    return 0;
}