#include <stdio.h>
#include <string.h>

int main() {
    int eecnt = 0, ebcnt=0; 
    char arr[21];
    scanf("%s", arr);

    for(int i=0; i<strlen(arr); i++){
        if(arr[i]=='e' && arr[i+1]=='e'){
            eecnt++;
        }if(arr[i]=='e' && arr[i+1]=='b'){
            ebcnt++;
        }
    }

    printf("%d %d", eecnt, ebcnt);
    return 0;
}