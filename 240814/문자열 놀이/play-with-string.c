#include <stdio.h>
#include <string.h>

int main() {
    int q, n, val1, val2;
    char arr[101], a, b, tmp;
    scanf("%s %d", arr, &q);

    for(int i=0; i<q; i++){
        scanf("%d", &n);
        getchar();
        switch (n){
            case 1:
                scanf("%d %d", &val1, &val2);
                tmp = arr[val1-1];
                arr[val1-1] = arr[val2-1];
                arr[val2-1] = tmp;
                printf("%s\n", arr);
                break;
            case 2:
                scanf("%c %c", &a, &b);
                for(int j=0; j<strlen(arr); j++){
                    if(arr[j]==a){
                        arr[j]=b;
                    }
                }
                printf("%s\n", arr);
                break;
            default:
                break;
        }
    }
    return 0;
}