#include <stdio.h>
#include <string.h>

int main() {

    char A[101]="", B[101]="";
    int cnt = 0;

    scanf("%s %s", A, B);

    int alen = strlen(A);
    int blen = strlen(B);

    for(int i=0; i<alen; i++){
        for(int j=0; j<blen; j++){
            if(A[i+j]==B[j]){
                cnt++;
            }else{
                cnt=0;
                break;
            }
            if(cnt==blen){
                for(int k=i; k<alen-blen; k++){
                    A[k] = A[k+blen];
                }
                A[alen-blen]='\0';
                alen = strlen(A);
                cnt=0;
                i=0;
            }
        }
    }

    for(int i=0; i<alen; i++){
        for(int j=0; j<blen; j++){
            if(A[i+j]==B[j]){
                cnt++;
            }else{
                cnt=0;
                break;
            }
            if(cnt==blen){
                for(int k=i; k<alen-blen; k++){
                    A[k] = A[k+blen];
                }
                A[alen-blen]='\0';
                alen = strlen(A);
                cnt=0;
                i=0;
            }
        }
    }

    printf("%s", A);

    return 0;
}