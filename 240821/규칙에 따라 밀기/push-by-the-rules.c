#include <stdio.h>
#include <string.h>

int main() {
    char A[101], command[101], tmp;
    scanf("%s", A);
    scanf("%s", command);
    int len = strlen(A);
    int comlen = strlen(command);

    for(int i=0; i<comlen; i++){
        switch (command[i]){
            case 'L':
                tmp = A[0];
                for(int j=0; j<len; j++){
                    if(j==len-1){
                        A[j]=tmp;
                    }else{
                        A[j] = A[j+1];
                    }
                }
                break;
            case 'R':
                tmp = A[len-1];
                for(int j=len-1; j>0; j--){
                    A[j] = A[j-1];
                }
                A[0]=tmp;
                break;
        }
    }

    printf("%s", A);

    return 0;
}