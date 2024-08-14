#include <stdio.h>
#include <string.h>

int main() {
    char arr1[101], arr2[101];
    int check = 0, len, cnt=0;
    scanf("%s", arr1);
    scanf("%s", arr2);

    len = strlen(arr1);

    while(check == 0){
        check = 1;
        for(int i=0; i<len; i++){
            if(arr1[i]==arr2[0]){
                for(int j=0; j<strlen(arr2); j++){
                    if(arr1[i+j]==arr2[j]){
                        cnt++;
                    }else{
                        cnt = 0;
                    }
                }
                if(cnt==strlen(arr2)){
                    check = 0;
                    for(int k=i; k<len-strlen(arr2); k++){
                        arr1[k] = arr1[k+strlen(arr2)];
                        if(k==len-strlen(arr2)-1){
                            arr1[k+1]='\0';
                        }
                    }
                }
            }
        }
    }

    printf("%s", arr1);
    return 0;
}