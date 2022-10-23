#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int x[n+1];
    int i, j;
    for(i = 1; i <= n; i++){
        scanf("%d", &x[i]);
    }
    for(i = n; i >= 1; i--){
        for(j = n; j >= 1; j--){
            if(i - j <= 0)
                printf("%d", x[i]);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
