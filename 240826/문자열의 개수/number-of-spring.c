#include <stdio.h>
#include <string.h>

int main() {
    const int MAX = 200;
    char keep[100][201], tmp[201]="";
    int cnt=0, kcnt=0;

    for(int i=0; i<MAX; i++){
        scanf("%s", tmp);
        if(strcmp(tmp, "0")==0){
            break;
        }
        cnt++;
        if(cnt%2==1){
            kcnt++;
            strcat(keep[kcnt-1], tmp);
        }
    }

    printf("%d\n", cnt);
    for(int i=0; i<kcnt; i++){
        printf("%s", keep[i]);
        printf("\n");
    }

    return 0;
}