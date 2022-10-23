#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int i, j;
    for(i = 1; i <= (n+1)/2; i++){
        for(j = 1; j <= n; j++){
            if(i - j >= 1)
                printf("1");
            else if(i + j >= n+2)
                printf("*");
            else
                printf("A");
        }
        if(i < (n+1)/2)
            printf("\n");
    }
    return 0;
}
