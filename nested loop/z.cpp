#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int i, j;
    int c = 0;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if(i == 1){
                printf("%d ", c);
                c++;
                if(c == 10)
                    c = 0;
            }
            else if(i + j == n+1){
                printf("%d ", c);
                c++;
                if(c == 10)
                    c = 0;
            }
            else if(i == n){
                printf("%d ", c);
                c++;
                if(c == 10)
                    c = 0;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
