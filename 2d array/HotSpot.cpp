#include<cstdio>
int x[1000][1000];
int col[1000];
int row[1000];
int main(){
    int R, C;
    scanf("%d %d", &R, &C);
    int i, j;
    for(i = 1; i <= R; i++){
        for(j = 1; j <= C; j++){
            scanf("%d", &x[i][j]);
        }
    }
    int num;
    scanf("%d", &num);
    int countCol = 0;
    int countRow = 0;

    //check max
    int max;
    int check = 0;

    for(i = 1; i <= R; i++){
        for(j = 1; j <= C; j++){
            // pass?
            int pass = 0;
            if(x[i][j] == num)
                pass = 1;
            // column
            for(int k = 1; k <= C; k++){
                if(x[i][k] == num)
                    countCol++;
            }
            // row
            for(int k = 1; k <= R; k++){
                if(x[k][j] == num)
                    countRow++;
            }
            int ans = countCol + countRow;
            // pass?
            if(pass == 1)
                ans = ans - 1;

            if(check == 0){
                max = ans;
                check = 1;
            }
            else if(ans > max)
                max = ans;
            // reset
            countCol = 0;
            countRow = 0;
        }
    }
    printf("%d\n", max);

    // check array == max
    int c = 0;
    int countRe = 0;
    for(i = 1; i <= R; i++){
        for(j = 1; j <= C; j++){
            // pass?
            int pass = 0;
            if(x[i][j] == num)
                pass = 1;
            // column
            for(int k = 1; k <= C; k++){
                if(x[i][k] == num)
                    countCol++;
            }
            // row
            for(int k = 1; k <= R; k++){
                if(x[k][j] == num)
                    countRow++;
            }

            int ans = countCol + countRow;
            // pass?
            if(pass == 1)
                ans = ans - 1;

            // hight light
            if(ans == max){
                countRe++;
                col[c] = i;
                row[c] = j;
                c++;
            }
            countCol = 0;
            countRow = 0;
        }
    }
    printf("%d\n", countRe);
    for(int k = 0; k < c; k++){
        printf("%d %d\n", col[k], row[k]);
    }
    return 0;
}
