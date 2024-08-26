#include <stdio.h>
#include <string.h>

int main() {
    int n, cnt=0;
    char A[101]="", tmp[101]="";
    scanf("%d %s", &n, A);

    for(int i=0; i<n; i++){
        scanf("%s", tmp);
        if(strcmp(A, tmp)==0){
            cnt++;
        }
    }

    printf("%d", cnt);
    
    return 0;
}