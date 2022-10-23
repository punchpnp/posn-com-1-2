#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int x[n+1];
    int i, j;
    for(i = 1; i <= n; i++){
        scanf("%d", &x[i]);
    }
    for(i = 1; i <= n-1; i++){
        for(j = 1; j <= n-1; j++){
            if(x[j] > x[j+1]){
                int temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }
    for(i = 1; i <= n; i++){
        if(x[i] == x[i+1])
            continue;
        printf("%d ", x[i]);
    }
    return 0;
}
