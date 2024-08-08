#include <stdio.h>
#include <string.h>

int main() {
    char str1[20], str2[20], str3[20];
    scanf("%s", &str1);
    scanf("%s", &str2);
    scanf("%s", &str3);

    int a,b,c,max,min;
    a = strlen(str1);
    b = strlen(str2);
    c = strlen(str3);

    if(a>b){
        if(a>c){
            max = a;
        }else{
            max = c;
        }
    }else{
        if(b>c){
            max = b;
        }else{
            max = c;
        }
    }

    if(a<b){
        if(a<c){
            min = a;
        }else{
            min = c;
        }
    }else{
        if(b<c){
            min = b;
        }else{
            min = c;
        }
    }

    printf("%d", max-min);
    return 0;
}