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
            if(index == tarlen){
                cnt++;
                //printf("cnt up \n");
                index = 0;
            }
            if(arr[i+j]==target[j]){
                //printf("index up\n");
                index++;
            }else{
                index = 0;
                break;
            }
        }
    }

    if(cnt>0){
        printf("%d", cnt);
    }else{
        printf("-1");
    }
    return 0;
}