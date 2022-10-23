#include<cstdio>
int main(){
    int K, N;
    scanf("%d %d", &K, &N);
    int x[N];
    int i;
    for(i = 0; i < N; i++){
        scanf("%d", &x[i]);
    }
    int sum = 0;
    int day;
    for(i = 0; i < N; i++){
        sum = sum + x[i];
        day = ( sum + ( (K*100) - 1 ))/ (K * 100);
        printf("%d\n", day);
    }
    return 0;
}
