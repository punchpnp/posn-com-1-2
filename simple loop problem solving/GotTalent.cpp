#include<cstdio>
int main(){
    int N, K;
    scanf("%d %d", &N, &K);
    int x[N], y[N], z[N];
    int i;
    int countYes = 0;
    for(i = 0; i < N; i++){
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
        scanf("%d", &z[i]);
    }
    for(i = 0; i < N; i++){
        if(x[i] == -1 && y[i] == -1 && z[i] == -1)
            printf("No\n");
        else if( (x[i] >= 8 && y[i] >= 8) || (x[i] >= 8 && z[i] >= 8) || (y[i] >= 8 && z[i] >= 8) ){
            printf("Yes\n");
            countYes++;
        }
        else
            printf("No\n");
    }
    printf("%d", countYes);
    return 0;
}
