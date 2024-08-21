#include <stdio.h>
#include <string.h>

int main() {
    char str[21];
    int arr[21];
    int cnt = 0, sum = 0;

    scanf("%s", str);
    int len = strlen(str);

    for(int i=0; i<len; i++){
        if(str[i]>='0' && str[i]<='9'){
            arr[cnt]=(int)str[i]-'0';
            cnt++;
        }
    }

    for(int i=0; i<cnt; i++){
        sum += arr[i];
    }

    printf("%d", sum);
    return 0;
}