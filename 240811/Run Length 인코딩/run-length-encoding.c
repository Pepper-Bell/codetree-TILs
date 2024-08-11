#include <stdio.h>
#include <string.h>

int main() {
    char arr[1000];
    char n, q=0;
    int cnt=1, sum=0;

    scanf("%s", arr);

    for(int i=0; i<=strlen(arr); i++){
        if(i==0){
            n = arr[i];
            sum++;
            continue;
        }
        if(arr[i]==n){
            cnt++;
        }else{
            if(cnt/1000==1){
                sum+=4;
            }else if(cnt/100>0){
                sum+=3;
            }else if(cnt/10>0){
                sum+=2;
            }else{
                sum++;
            }
            n = arr[i];
            sum++;
            cnt = 1;
        }
    }

    printf("%d\n", sum-1);

    for(int i=0; i<=strlen(arr); i++){
        if(i==0){
            n = arr[i];
            continue;
        }
        if(arr[i]==n){
            cnt++;
        }else{
            printf("%c%d", n, cnt);
            n = arr[i];
            cnt = 1;
        }
    }

    return 0;
}