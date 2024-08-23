#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[10], str2[10], res1[10], res2[10];
    int cnt=0;
    scanf("%s", str1);
    scanf("%s", str2);
    int len1=strlen(str1);
    int len2=strlen(str2);

    for(int i=0; i<len1; i++){
        if(str1[i]>='0' && str1[i]<='9'){
            res1[cnt]=str1[i];
            cnt++;
        }
    }
    res1[cnt]='\0';
    cnt = 0;
    for(int i=0; i<len2; i++){
        if(str2[i]>='0' && str2[i]<='9'){
            res2[cnt]=str2[i];
            cnt++;
        }
    }
    res2[cnt]='\0';

    printf("%d", atoi(res1)+atoi(res2));

    return 0;
}