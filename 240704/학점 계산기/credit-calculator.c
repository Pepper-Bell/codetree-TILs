#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n; 
    double sum=0, avg=0;

    scanf("%d ", &n);
    double score[n];

    for(int i=0; i<n; i++){
        scanf("%lf ", &score[i]);
        sum+=score[i];
    }

    avg = sum/n;
    if(avg>=4.0){
        printf("%.1lf\nPerfect", avg);
    }else if(avg>=3.0){
        printf("%.1lf\nGood", avg);
    }else{
        printf("%.1lf\nPoor", avg);
    }
    return 0;
}