#include <stdio.h>
#include <string.h>

int main() {
    char arr[101];
    scanf("%s", arr);

    for(int i=2; i<strlen(arr)-2; i++){
        arr[i]=arr[i+1];
    }
    arr[strlen(arr)-3] = arr[strlen(arr)-1];
    arr[strlen(arr)-2] = '\0';

    printf("%s", arr);
    return 0;
}