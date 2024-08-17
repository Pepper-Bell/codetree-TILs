#include <stdio.h>
#include <string.h>

char str[101], remstr[101];
void strRemove();
int cnt = 0;

int main() {
    scanf("%s", str); //baabba
    scanf("%s", remstr); //ab
    int lenstr = strlen(str);
    int lenrem = strlen(remstr);

    strRemove(lenstr, lenrem);
    
    cnt = 0;
    if(strlen(str)==lenrem){
        for(int i=0; i<lenrem; i++){
            if(str[i]==remstr[i]){
                cnt++;
            }
        }
    }

    if(cnt==lenrem){
        return 0;
    }else{
        printf("%s", str);
    }

    return 0;
}

void strRemove(int a, int b){
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            if(str[i+j]==remstr[j]){
                cnt++;
            }else{
                cnt=0;
            }
            if(cnt==b){
                for(int k=i+j-1; k<a-b; k++){
                    //printf("%c %c %d %d\n", str[k], str[k+b], k, k+b);
                    str[k]=str[k+b];
                    if(k==a-b-1){
                        str[k+1]='\0';
                        strRemove(a-b, b);
                    }
                }
            }
        }
    }
}