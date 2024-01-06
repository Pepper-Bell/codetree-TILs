#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char s1,s2,s3;
    int temp1, temp2, temp3;

    scanf(" %c %d", &s1, &temp1);
    scanf(" %c %d", &s2, &temp2);
    scanf(" %c %d", &s3, &temp3);


    int check = 0;

    if(s1=='Y' && temp1 >=37){
        check++;
    }
    if(s2=='Y' && temp2 >= 37){
        check++;
    }
    if(s3=='Y' && temp3 >= 37){
        check++;
    }

    if(check>=2){
        printf("E");
    }else{
        printf("N");
    }
    return 0;
}