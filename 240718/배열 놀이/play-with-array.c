#include <stdio.h>

int main(){
    int n, q, check, a, b;
    scanf("%d %d", &n, &q);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }

    for(int i=0; i<q; i++){
        scanf("%d", &check);
        switch(check){
            case 1:
                scanf("%d", &a);
                printf("%d\n", arr[a-1]);
                break;
            case 2:
                scanf("%d", &a);
                for(int j=0; j<n; j++){
                    if(arr[j]==a){
                        printf("%d\n", j+1);
                        break;
                    }
                    if(j==n-1){
                        printf("0\n");
                    }
                }
                break;
            case 3:
                scanf("%d %d", &a, &b);
                for(int j=a-1; j<b; j++){
                    printf("%d ", arr[j]);
                }
                printf("\n");
                break;
        }
    }


    return 0;
}