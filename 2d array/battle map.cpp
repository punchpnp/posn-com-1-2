#include<cstdio>
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int i, j;
    int x[m][n];
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &x[i][j]);
        }
    }
    int k;
    scanf("%d", &k);
    printf("%d\n", k);
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
