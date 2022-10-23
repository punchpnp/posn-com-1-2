#include<cstdio>
int main(){
    int num[10000];
    int loopMax = 0;
    int loopNum = 0;
    int key;
    int countA = 1;
    int i, j;

    // input
    for(i = 0; ; i++){
        scanf("%d", &num[i]);
        if(num[i] == 0)
            break;
    }
    //printf("%d\n", i);
    for(j = 0; j < i; j++){
        if(num[j] == num[j+1]){
            countA++;
            if(countA > loopMax){
                loopMax = countA;
                key = 1;
            }
        }
        else{
            if(loopMax == countA && key == 1){
                loopNum = num[j];
                key = 0;
            }
            countA = 1;
            if(countA > loopMax){
                loopMax = countA;
                key = 1;
            }
        }
    }
    printf("%d\n", loopMax);
    printf("%d", loopNum);
    return 0;
}
