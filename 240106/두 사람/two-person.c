#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int age1, age2;
    char s1, s2;

    scanf("%d %c", &age1, &s1);
    scanf("%d %c", &age2, &s2);

    printf("%d", (age1>=19 && s1=='M')||(age2>=19 && s2 =='M'));
    return 0;
}