#include<cstdio>
int main(){
    int M;
    scanf("%d", &M); // 6
    int i;
    int num[M+1];  // num[7]
    int sum = 0;
    int newM = M;
    for(i = 1; i <= M; i++){ // 1 2 3 4 5 6
        if(i == 1){
            num[i] = 1;
            sum = sum + num[i]; // sum = 1
        }
        else if(i == 2){
            newM = M - 1; // M = 5
            num[i] = num[i-1] + (newM*2);  // 1 + 10 = 11
            sum = sum + num[i]; // 1+11 = 12
        }
        else if(i == 3){
            num[i] = num[i-1] + (newM*2); // 11 + 10 = 21
            sum = sum + num[i]; // 12 + 21 = 33
        }
        else if(i % 2 == 0){
            newM = newM - 2; // 5-2 = 3  // 3 - 2 = 1
            num[i] = num[i-1] + (newM*2); // 21 + 6 = 27 // 33+2 = 35
            sum = sum + num[i]; // 33 + 27 = 60 // 93 + 35 = 128
        }
        else if(i % 2 == 1){
            num[i] = num[i-1] + (newM*2); // 27 + 6 = 33
            sum = sum + num[i]; // 60 + 33 = 93
        }
    }
    printf("%d", sum);
    return 0;
}
