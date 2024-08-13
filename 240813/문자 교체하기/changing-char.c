#include <stdio.h>
#include <string.h>

int main() {
    char arr1[100], arr2[100];
    scanf("%s %s", arr1, arr2);

    for(int i=0; i<strlen(arr2); i++){
        if(i<2){
            printf("%c", arr1[i]);
        }else{
            printf("%c", arr2[i]);
        }
    }
    return 0;
}