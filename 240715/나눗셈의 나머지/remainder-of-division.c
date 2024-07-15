#include <stdio.h>
#include <string.h>

int main(){
    int a,b, div[9]={0, }, cnt=0, sum=0;

    scanf("%d %d", &a, &b);

    while(a>1){
        //printf("%d / %d = %d...%d\n", a, b, a/b, a%b);
        div[a%b]++;
        cnt++;
        a /= b;

    }

    for(int i=0; i<10; i++){
        sum += div[i]*div[i];
    }

    printf("%d", sum);

    return 0;
}