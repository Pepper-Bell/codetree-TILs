#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int parent, child, left;
    scanf("%d %d", &a, &b);

    printf("%d.", a/b);

    parent = a%b;
    child = b;
    left = parent;
    
    for(int i=0; i<20; i++){
        parent = left*10;
        printf("%d", parent/child);
        left = parent%child;
    }

    return 0;
}