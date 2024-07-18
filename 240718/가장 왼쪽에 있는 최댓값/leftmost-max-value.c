#include <stdio.h>

int main() {

    int n, max = 0, tmp =0;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
        if(arr[i]>max){
            max = arr[i];
            tmp = i;
        }
    }

    printf("%d ", tmp+1);

    while(tmp!=0){
        max = 0;
        for(int i=0; i<tmp; i++){
            if(arr[i]>max){
                max = arr[i];
                n = i;
            }
        }
        tmp = n;
        printf("%d ", tmp+1);
    }



    return 0;
}