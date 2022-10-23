#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int i, j;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if(i + j >= n + ((n+3)/2))
                printf(" ");
            else if(j - i >= n - ((n-1)/2))
                printf(" ");
            else if(i - j >= n - ((n-1)/2))
                printf(" ");
            else if(i + j <= n - ((n-1)/2))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
