#include <stdio.h>

int main() {

    int arr[2][4];
    int sum = 0;
    double gasum[2]={0, };
    double sesum[4]={0, };

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            scanf("%d ", &arr[i][j]);
            sum+=arr[i][j];
            gasum[i]+=arr[i][j];
            sesum[j]+=arr[i][j];
        }
    }

    printf("%.1lf %.1lf\n", gasum[0]/4, gasum[1]/4);
    printf("%.1lf %.1lf %.1lf %.1lf\n", sesum[0]/2, sesum[1]/2, sesum[2]/2, sesum[3]/2);
    printf("%.1lf", (double)sum/8);
    return 0;
}