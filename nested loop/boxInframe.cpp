#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int i, j;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if(i == 2 && j != 1 && j != n)
                printf(" ");
            else if(i == n-1 && j != 1 && j != n)
                printf(" ");
            else if(j == 2 && i != 1 && i != n)
                printf(" ");
            else if(j == n-1 && i != 1 && i != n)
                printf(" ");
            else
                printf("*");
        }
        if(i < n)
            printf("\n");
    }
    return 0;
}

