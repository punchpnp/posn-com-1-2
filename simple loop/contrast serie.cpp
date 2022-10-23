#include<cstdio>
int main(){
    int M, N;
    scanf("%d %d", &M, &N);
    int x[10000], y[10000];
    int i;
    int check = 0;
    int sum = 0;
    for(i = 0; ; i++){
        if(check == 0){
            x[i] = 3;
            y[i] = 1;
            check = 1;
        }
        if(M >= x[i])
            sum = sum + (x[i] * y[i]);
        if(M > x[i]){
            x[i+1] = x[i] + y[i];
            y[i+1] = x[i] - y[i];
        }
        if(M == x[i])
            break;
    }
    printf("%d", sum);
    return 0;
}
