#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int i, j;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            printf("%d%d ", i, j);
        }
        printf("\n");
    }
    return 0;
}
