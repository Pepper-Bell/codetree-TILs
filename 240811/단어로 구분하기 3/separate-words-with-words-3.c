#include <stdio.h>

int main() {
    char str[10][200];
    for(int i=0; i<10; i++){
        scanf("%s", &str[i]);
    }

    for(int i=9; i>=0; i--){
        printf("%s\n", str[i]);
    }
    return 0;
}