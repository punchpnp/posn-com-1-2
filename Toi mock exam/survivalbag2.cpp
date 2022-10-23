#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int x[n];
    int y[n];
    int z[n];
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
        scanf("%d", &z[i]);
    }
    int min;
    int havex[n];
    int havey[n];
    int havez[n];
    for(i = 0; i < n; i++){
        if(i > 0){
            x[i] = havex[i-1] + x[i];
            y[i] = havey[i-1] + y[i];
            z[i] = havez[i-1] + z[i];
        }
        min = x[i];
        if(y[i] < min)
            min = y[i];
        if(z[i] < min)
            min = z[i];
        if(min == x[i]){
            int ansx = x[i] / 3;
            havex[i] = x[i] % 3;
            havey[i] = y[i] - ansx*4;
            havez[i] = z[i] - ansx*2;
            printf("%d ", ansx);
            printf("%d ", x[i] % 3 );
            printf("%d ", y[i] - ( ansx * 4 ) );
            printf("%d\n", z[i] - ( ansx * 2 ) );
        }

        else if(min == y[i]){
            int ansy = y[i] / 4;
            havex[i] = x[i] - ansy*3;
            havey[i] = y[i] % 4;
            havez[i] = z[i] - ansy*2;
            printf("%d ", ansy);
            printf("%d ", x[i] - ( ansy * 3 ) );
            printf("%d ", y[i] % 4);
            printf("%d\n", z[i] - ( ansy * 2 ) );
        }

        else if(min == z[i]){
            int ansz = z[i] / 2;
            havex[i] = x[i] - ansz*3;
            havey[i] = y[i] - ansz*4;
            havez[i] = z[i] % 2;
            printf("%d ", ansz);
            printf("%d ", x[i] - ( ansz * 3 ) );
            printf("%d ", y[i] - ( ansz * 4 ) );
            printf("%d\n", z[i] % 2);
        }
    }

    return 0;
}
