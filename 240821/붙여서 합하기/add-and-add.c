#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char A[2001], B[2001];
    scanf("%s %s", A, B);

    int alen = strlen(A);
    int blen = strlen(B);
    int cnt = 0;

    for(int i=alen; i<alen+blen; i++){
        A[i]=B[i-alen];
    }
    for(int i=blen; i<alen+blen; i++){
        B[i]=A[i-blen];
    }

    printf("%d", atoi(A)+atoi(B));
    return 0;
}