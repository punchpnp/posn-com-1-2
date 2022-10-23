#include<cstdio>
int main(){
    int M, N;
    scanf("%d %d", &M, &N);
    int i = 0;
    int check1 = 0;
    int check2 = 0;
    int sum1 = 0;
    int sum2 = 0;
    int x[10000], y[10000];
    // x[i]
    for(i = 0; ; i++){
        if(check1 == 0){
            x[i] = 1;
            check1 = 1;
        }
        if(M >= x[i]){
            if(i % 2 == 1)
                x[i] = x[i] * (-1);
            sum1 = sum1 + x[i];
            if(i % 2 == 1)
                x[i] = x[i] * (-1);
        }
        if(M > x[i])
            x[i+1] = x[i] + 2;
        if(M == x[i])
            break;
    }
    // y[i]
    for(i = 0; ; i++){
        if(check2 == 0){
            y[i] = 1;
            check2 = 1;
        }
        if(N >= y[i]){
            if(i % 2 == 1)
                y[i] = y[i] * (-1);
            sum2 = sum2 + y[i];
            if(i % 2 == 1)
                y[i] = y[i] * (-1);
        }
        if(N > y[i])
            y[i+1] = y[i] * 2;
        if(N == y[i])
            break;
    }
    printf("%d", sum1 * sum2);
    return 0;
}
