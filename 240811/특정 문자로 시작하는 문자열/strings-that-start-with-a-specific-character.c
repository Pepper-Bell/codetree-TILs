#include <stdio.h>
#include <string.h>

int main() {
    int n, sum=0, cnt=0;
    char target;

    scanf("%d", &n);

    char str[n][21];

    for(int i=0; i<n; i++){
        scanf("%s", &str[i]);
    }
    getchar();
    scanf("%c", &target);

    for(int i=0; i<n; i++){
        if(str[i][0]==target){
            sum += strlen(str[i]);
            cnt++;
        }
    }

    printf("%d %.2lf", cnt, (double)sum/cnt);

    return 0;
}