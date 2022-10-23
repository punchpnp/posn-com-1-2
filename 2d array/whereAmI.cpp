#include<cstdio>
int array[301][301];
int main(){
    int R, C;
    scanf("%d %d", &R, &C);
    int i, j;
    int x;
    for(i = 1; i <= R; i++){
        for(j = 1; j <= C; j++){
            scanf("%d", &x);
            array[i][j] = x;
        }
    }

    int num;
    scanf("%d", &num);
    for(i = 1; i <= R; i++){
        for(j = 1; j <= C; j++){
            if(array[i][j] == num)
                printf("%d ", num);
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}
