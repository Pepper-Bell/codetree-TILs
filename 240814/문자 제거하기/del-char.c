#include <stdio.h>
#include <string.h>

int main() {
    char arr[21];
    scanf("%s", arr);
    int len = strlen(arr);
    int n;

    while(len != 1){
        scanf("%d", &n);
        if(n>=len){
            arr[len-1] = '\0';
        }else{
            for(int i=n; i<len; i++){
                arr[i] = arr[i+1];
                if(i==len-1){
                    arr[i] = '\0';
                }
            }
        }
        len--;
        printf("%s\n", arr);
    }

    return 0;
}