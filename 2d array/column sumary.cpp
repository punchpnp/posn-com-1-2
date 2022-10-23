#include<cstdio>
int array[301][301];
int main(){
    int R, C;
    scanf("%d %d", &R, &C);
    int i = 1, j = 1;
    int x;
    for(i = 1; i <= R; i++){
        for(j = 1; j <= C; j++){
            scanf("%d", &x);
            array[i][j] = x;
        }
    }

    int num;
    int count = 0;
    int countAll = 0;
    scanf("%d", &num);

    for(j = 1; j <= C; j++){
        for(i = 1; i <= R; i++){
        if(array[i][j] == num){
            countAll++;
            count++;
        }

        if(i == R && count > 0){
            printf("%d ", count);
            count = 0;
        }

        else if(i == R && count == 0)
            printf("* ");
        }
    }

    printf("\n%d", countAll);
    return 0;
}
