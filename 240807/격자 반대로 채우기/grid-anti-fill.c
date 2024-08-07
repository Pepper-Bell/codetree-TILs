#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    if(n%2==0){
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j%2==0){
                    printf("%d ", n*(n-j-1)+1+i);
                }else{
                    printf("%d ", n*(n-j)-i);
                }
            }
            printf("\n");
        }

    }else{
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j%2!=0){
                    printf("%d ", n*(n-j-1)+1+i);
                }else{
                    printf("%d ", n*(n-j)-i);
                }
            }
            printf("\n");
        }
    }
    return 0;
}