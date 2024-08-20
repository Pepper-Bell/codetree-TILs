#include <stdio.h>
#include <string.h>

int main() {
    char str[1001], tmp;
    int q;
    scanf("%s %d", str, &q);
    int arr[q];
    int len = strlen(str);

    for(int i=0; i<q; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<q; i++){
        switch (arr[i]){
            case 1:
                tmp = str[0];
                for(int j=0; j<len; j++){
                    if(j==len-1){
                        str[j]=tmp;
                    }else{
                        str[j]=str[j+1];
                    }
                }
                printf("%s\n", str);
                break;
            case 2:
                tmp = str[len-1];
                for(int j=len-1; j>0; j--){
                    str[j]=str[j-1];
                }
                str[0]=tmp;
                printf("%s\n", str);
                break;
            case 3:
                for(int j=0; j<len/2; j++){
                    tmp = str[j];
                    str[j]=str[len-1-j];
                    str[len-1-j] = tmp;
                }
                printf("%s\n", str);
                break;
        }
    }

    return 0;
}