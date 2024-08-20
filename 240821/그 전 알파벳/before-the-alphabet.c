#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);

    if(a=='a'){
        printf("z");
    }else{
        printf("%c", a-1);
    }
    return 0;
}