#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[10], str2[10];
    char change1[10], change2[10];

    scanf("%s %s", str1, str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int cnt=0;

    for(int i=0; i<len1; i++){
        if(str1[i]>='0'&&str1[i]<='9'){
            change1[cnt]=str1[i];
            cnt++;
        }else{
            break;
        }
    }

    cnt = 0;

    for(int i=0; i<len2; i++){
        if(str2[i]>='0'&&str2[i]<='9'){
            change2[cnt]=str2[i];
            cnt++;
        }else{
            break;
        }
    }

    printf("%d", atoi(change1)+atoi(change2));

    return 0;
}