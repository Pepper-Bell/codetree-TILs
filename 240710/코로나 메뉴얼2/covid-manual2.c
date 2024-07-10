#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int temperature, arr[4];
    char symptom;
    for(int i=0; i<3; i++){
        scanf("%c %d ", &symptom, &temperature);
        if(symptom=='Y' && temperature>=37){
            arr[0]++;
        }else if(symptom == 'Y'){
            arr[2]++;
        }else if(symptom == 'N' && temperature>=37){
            arr[1]++;
        }else{
            arr[3]++;
        }
    }

    for(int i=0; i<4; i++){
        printf("%d ", arr[i]);
    }
    if(arr[0]>=2){
        printf("E");
    }
    return 0;
}