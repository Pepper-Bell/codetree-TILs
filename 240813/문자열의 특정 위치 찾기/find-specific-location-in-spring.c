#include <stdio.h>
#include <string.h>

int main() {
    int index = -1;
    char arr[21], target;
    scanf("%s %c", arr, &target);

    for(int i=0; i<strlen(arr); i++){
        if(arr[i]==target){
            index = i;
            break;
        }
    }

    if(index>0){
        printf("%d", index);
    }else{
        printf("No");
    }
    return 0;
}