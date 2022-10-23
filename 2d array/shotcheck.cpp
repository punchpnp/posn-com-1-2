#include<cstdio>
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int k;
    scanf("%d", &k);
    int x, y;
    int i, j;
    int countIn = 0;
    int countOut = 0;
    for(i = 1; i <= k; i++){
        scanf("%d %d", &x, &y);
        if(x >= 1 && x <= m && y >= 1 && y <= n)
            countIn++;
        else
            countOut++;

    }
    printf("%d\n", countIn);
    printf("%d", countOut);
    return 0;
}
