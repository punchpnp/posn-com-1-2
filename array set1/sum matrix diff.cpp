#include<cstdio>
#include<cmath>
int main(){
    int n;
    scanf("%d", &n);
    int i, j;
    int x[n+1][n+1];
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            scanf("%d", &x[i][j]);
        }
    }
    int sum = 0;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if(i >= 1 && j >= 2)
                sum = sum + abs(x[i][j] - x[i+1][j-1]);
        }
    }
    printf("%d", sum);
    return 0;
}
