#include <stdio.h>
#include <string.h>

int main() {
    char arr[1001], target[3];
    int cnt=0;
    scanf("%s", arr);
    scanf("%s", target);

    for(int i=0; i<strlen(arr); i++){
        if(arr[i]==target[0] && arr[i+1]==target[1]){
            cnt++;
        }
    }

    printf("%d", cnt);
    return 0;
}