#include <stdio.h>
#include <string.h>

int main() {
    char arr[101], second, first;
    scanf("%s", arr);
    first = arr[0];
    second = arr[1];

    for(int i=0; i<strlen(arr); i++){
        if(arr[i]==second){
            arr[i]=first;
        }
    }


    printf("%s", arr);
    return 0;
}