#include <stdio.h>
#include <string.h>

int main() {
    char arr[21], first, second;
    scanf("%s", arr);
    first = arr[0];
    second = arr[1];

    for(int i=0; i<strlen(arr); i++){
        if(arr[i]==first){
            printf("%c", second);
        }else if(arr[i]==second){
            printf("%c", first);
        }else{
            printf("%c", arr[i]);
        }
    }
    return 0;
}