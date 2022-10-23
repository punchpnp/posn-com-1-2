#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int u[n+1];
    int v[n+1];
    int i;
    for(i = 1; i <= n; i++){
        scanf("%d", &u[i]);
    }
    for(i = 1; i <= n; i++){
        scanf("%d", &v[i]);
    }
    int sum = 0;
    for(i = 1; i <= n; i++){
        sum = sum + (u[i] * v[i]);
    }
    printf("%d", sum);
    return 0;
}
