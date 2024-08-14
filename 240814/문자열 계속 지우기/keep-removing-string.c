#include <stdio.h>
#include <string.h>

int main() {
    char arr1[101], arr2[101];
    int check = 0, len;
    scanf("%s", arr1);
    scanf("%s", arr2);

    len = strlen(arr1);

    while(check == 0){
        check = 1;
        for(int i=0; i<len; i++){
            if(arr1[i]==arr2[0] && arr1[i+1]==arr2[1]){
                check = 0;
                for(int j=i; j<len-2; j++){
                    arr1[j] = arr1[j+2];
                    if(j==len-3){
                        arr1[j+1] = '\0';
                    }
                }
            }
        }
    }

    printf("%s", arr1);
    return 0;
}