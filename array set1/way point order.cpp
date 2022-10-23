#include<cstdio>
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int k;
    scanf("%d", &k);
    int x[n+1][2+1];
    int i, j;
    for(i = 1; i <= k; i++){
        for(j = 1; j <= 2; j++){
            scanf("%d", &x[i][j]);
        }
    }
    int c = 1;
    int ans[k+1];
    int check = 0;
    for(i = 1; i <= m; i++){
        for(j = 1; j <= n; j++){
            if(x[c][1] == i && x[c][2] == j){
                ans[c] = c;
                c++;
            }
            else
                check = 1;
        }
        //printf("\n");
    }
    for(i = 1; i <= m; i++){
        for(j = 1; j <= n; j++){
            if(check == 1)
                printf("0 ");
            else{
                printf("%d ", ans[c]);
                c++;
            }
        }
        printf("\n");
    }

    return 0;
}
