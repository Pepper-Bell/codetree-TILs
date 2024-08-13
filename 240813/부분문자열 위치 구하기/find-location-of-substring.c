#include <stdio.h>
#include <string.h>

int main() {
    char arr[1001], target[1001];
    int index = 0, cnt=0;
    scanf("%s", arr);
    scanf("%s", target);

    int arrlen = strlen(arr);
    int tarlen = strlen(target);

    for(int i=0; i<arrlen; i++){
        for(int j=0; j<tarlen; j++){
            if(cnt==tarlen){
                break;
            }
            if(arr[i+j]==target[j]){
                index=i;
                cnt++;
            }else{
                index = -1;
                break;
            }
        }
        if(cnt==tarlen){
            break;
        }
    }

    printf("%d", index);
    return 0;
}