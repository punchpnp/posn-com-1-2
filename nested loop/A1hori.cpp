#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int i, j;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= (n+1)/2; j++){
            if(j - i >= 1)
                printf("1");
            else if(i + j >= n+2)
                printf("*");
            else
                printf("A");
        }
        if(i < n)
            printf("\n");
    }
    return 0;
}
