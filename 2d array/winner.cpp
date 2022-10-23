#include<cstdio>
int main(){
    int m ,n;
    scanf("%d %d", &m, &n);
    int i, j, c;
    int x[m+1][n+1];
    int pass[m+1][n+1];
    int countBoat = 0;
    for(i = 1; i <= m; i++){
        for(j = 1; j <= n; j++){
            scanf("%d", &x[i][j]);
            pass[i][j] = {0};
            if(x[i][j] == 1)
                countBoat++;
        }
    }
    int k;
    scanf("%d", &k);
    int a, b;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    int countShoot = 0;
    int ans;
    int ansLast = 0;
    int check = 0;
    for(i = 1; i <= k; i++){
        scanf("%d %d", &a, &b);
        if(a >= 1 && a <= m && b >= 1 && b <= n){ // in
            if(x[a][b] == 1 && pass[a][b] == 0){ // x[1][2] pass[1][2]
                pass[a][b] = 1;
                if(check == 0){
                    ansLast = i;
                    check = 1;
                }
                countShoot++;
                if(countShoot == countBoat)
                    ans = i;
                count1++;
            }
            else if(x[a][b] == 1 && pass[a][b] == 1)
                count3++;
            else if(x[a][b] == 0 && pass[a][b] == 0){
                pass[a][b] = 1;
                count2++;
            }
            else if(x[a][b] == 0 && pass[a][b] == 1)
                count4++;
        }
        else // out
            count5++;
    }
    printf("%d\n", count1);
    printf("%d\n", count2);
    printf("%d\n", count3);
    printf("%d\n", count4);
    printf("%d\n", count5);
    if(countShoot == countBoat)
        printf("attacker %d", ans);
    else{
        if(ansLast == 0)
            printf("battleship -1");
        else
            printf("battleship %d", ansLast);
    }

    return 0;
}
